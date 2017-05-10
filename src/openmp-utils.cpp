
#include <R.h>
#include <Rinternals.h>
#include <Rversion.h>

#ifdef _OPENMP
  #include <omp.h>
#else // so it still compiles on machines with compilers void of openmp support
  #define omp_get_num_threads() 1
  #define omp_get_thread_num() 0
#endif

#ifdef _OPENMP
#include <pthread.h>
#endif

#ifdef MIN
#undef MIN
#endif
#define MIN(a,b) (((a)<(b))?(a):(b))

#ifdef MAX
#undef MAX
#endif
#define MAX(a,b) (((a)>(b))?(a):(b))

/* GOALS:
* 1) By default use all CPU for end-user convenience in most usage scenarios.
* 2) But not on CRAN - two threads max is policy
* 3) And not if user doesn't want to:
*    i) Respect env variable OMP_NUM_THREADS (which just calls (ii) on startup)
*    ii) Respect omp_set_num_threads()
*    iii) Provide way to restrict data.table only independently of base R and
*         other packages using openMP
* 4) Avoid user needing to remember to unset this control after their use of data.table
* 5) Automatically drop down to 1 thread when called from parallel package (e.g. mclapply) to
*    avoid the deadlock/hang (#1745 and #1727) and return to prior state afterwards.
*/

static int DTthreads = 0;
// Never read directly, hence static. Always go via getDTthreads() and check that in
// future using grep's in CRAN_Release.cmd

int getDTthreads() {
#ifdef _OPENMP
    int ans = DTthreads == 0 ? omp_get_max_threads() : MIN(DTthreads, omp_get_max_threads());
    return MAX(1, ans);
#else
    return 1;
#endif
}

SEXP getDTthreads_R() {
    return ScalarInteger(getDTthreads());
}

SEXP setDTthreads(SEXP threads) {
    if (!isInteger(threads) || length(threads) != 1 || INTEGER(threads)[0] < 0) {
        // catches NA too since NA is -ve
        error("Argument to setDTthreads must be a single integer >= 0. \
            Default 0 is recommended to use all CPU.");
    }
    // do not call omp_set_num_threads() here as that affects other openMP
    // packages and base R as well potentially.
    int old = DTthreads;
    DTthreads = INTEGER(threads)[0];
    return ScalarInteger(old);
}

// auto avoid deadlock when fst called from parallel::mclapply
static int preFork_DTthreads = 0;

void when_fork() {
    preFork_DTthreads = DTthreads;
    DTthreads = 1;
}

void when_fork_end() {
    DTthreads = preFork_DTthreads;
}

void avoid_openmp_hang_within_fork()
{
    // Called once on loading data.table from init.c
#ifdef _OPENMP
    pthread_atfork(&when_fork, &when_fork_end, NULL);
#endif
}


// [[Rcpp::export]]
SEXP hasOpenMP() {
  // Just for use by onAttach to avoid an RPRINTF from C level which isn't suppressable by CRAN
  // There is now a 'grep' in CRAN_Release.cmd to detect any use of RPRINTF in init.c, which is
  // why RPRINTF is capitalized in this comment to avoid that grep.
  // TODO: perhaps .Platform or .Machine in R itself could contain whether OpenMP is available.
  #ifdef _OPENMP
  return ScalarLogical(TRUE);
  #else
  return ScalarLogical(FALSE);
  #endif
}
