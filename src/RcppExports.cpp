// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// UnserializeObjectAttributes
SEXP UnserializeObjectAttributes(SEXP rObject, RawVector rawVector, Function unserializer);
RcppExport SEXP fst_UnserializeObjectAttributes(SEXP rObjectSEXP, SEXP rawVectorSEXP, SEXP unserializerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type rObject(rObjectSEXP);
    Rcpp::traits::input_parameter< RawVector >::type rawVector(rawVectorSEXP);
    Rcpp::traits::input_parameter< Function >::type unserializer(unserializerSEXP);
    rcpp_result_gen = Rcpp::wrap(UnserializeObjectAttributes(rObject, rawVector, unserializer));
    return rcpp_result_gen;
END_RCPP
}
// fstStore
SEXP fstStore(Rcpp::String fileName, SEXP table, SEXP compression, Rcpp::Function serializer);
RcppExport SEXP fst_fstStore(SEXP fileNameSEXP, SEXP tableSEXP, SEXP compressionSEXP, SEXP serializerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type table(tableSEXP);
    Rcpp::traits::input_parameter< SEXP >::type compression(compressionSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type serializer(serializerSEXP);
    rcpp_result_gen = Rcpp::wrap(fstStore(fileName, table, compression, serializer));
    return rcpp_result_gen;
END_RCPP
}
// fstMeta
Rcpp::List fstMeta(Rcpp::String fileName);
RcppExport SEXP fst_fstMeta(SEXP fileNameSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type fileName(fileNameSEXP);
    rcpp_result_gen = Rcpp::wrap(fstMeta(fileName));
    return rcpp_result_gen;
END_RCPP
}
// fstRead
SEXP fstRead(SEXP fileName, SEXP columnSelection, SEXP startRow, SEXP endRow);
RcppExport SEXP fst_fstRead(SEXP fileNameSEXP, SEXP columnSelectionSEXP, SEXP startRowSEXP, SEXP endRowSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type columnSelection(columnSelectionSEXP);
    Rcpp::traits::input_parameter< SEXP >::type startRow(startRowSEXP);
    Rcpp::traits::input_parameter< SEXP >::type endRow(endRowSEXP);
    rcpp_result_gen = Rcpp::wrap(fstRead(fileName, columnSelection, startRow, endRow));
    return rcpp_result_gen;
END_RCPP
}
// BytesConvert
SEXP BytesConvert(SEXP integer);
RcppExport SEXP fst_BytesConvert(SEXP integerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type integer(integerSEXP);
    rcpp_result_gen = Rcpp::wrap(BytesConvert(integer));
    return rcpp_result_gen;
END_RCPP
}
// fstrbind
SEXP fstrbind(Rcpp::String fileName, SEXP table, SEXP compression, Rcpp::Function serializer);
RcppExport SEXP fst_fstrbind(SEXP fileNameSEXP, SEXP tableSEXP, SEXP compressionSEXP, SEXP serializerSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::String >::type fileName(fileNameSEXP);
    Rcpp::traits::input_parameter< SEXP >::type table(tableSEXP);
    Rcpp::traits::input_parameter< SEXP >::type compression(compressionSEXP);
    Rcpp::traits::input_parameter< Rcpp::Function >::type serializer(serializerSEXP);
    rcpp_result_gen = Rcpp::wrap(fstrbind(fileName, table, compression, serializer));
    return rcpp_result_gen;
END_RCPP
}
// SType
int SType(SEXP value);
RcppExport SEXP fst_SType(SEXP valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type value(valueSEXP);
    rcpp_result_gen = Rcpp::wrap(SType(value));
    return rcpp_result_gen;
END_RCPP
}
// compChar
int compChar(SEXP str1, SEXP str2);
RcppExport SEXP fst_compChar(SEXP str1SEXP, SEXP str2SEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type str1(str1SEXP);
    Rcpp::traits::input_parameter< SEXP >::type str2(str2SEXP);
    rcpp_result_gen = Rcpp::wrap(compChar(str1, str2));
    return rcpp_result_gen;
END_RCPP
}
// IsSortedTable
bool IsSortedTable(SEXP table, SEXP key);
RcppExport SEXP fst_IsSortedTable(SEXP tableSEXP, SEXP keySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type table(tableSEXP);
    Rcpp::traits::input_parameter< SEXP >::type key(keySEXP);
    rcpp_result_gen = Rcpp::wrap(IsSortedTable(table, key));
    return rcpp_result_gen;
END_RCPP
}
// FirstIntEqualHigher
SEXP FirstIntEqualHigher(SEXP intVec, SEXP intKey, SEXP lower, SEXP upper);
RcppExport SEXP fst_FirstIntEqualHigher(SEXP intVecSEXP, SEXP intKeySEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type intVec(intVecSEXP);
    Rcpp::traits::input_parameter< SEXP >::type intKey(intKeySEXP);
    Rcpp::traits::input_parameter< SEXP >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< SEXP >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(FirstIntEqualHigher(intVec, intKey, lower, upper));
    return rcpp_result_gen;
END_RCPP
}
// LastIntEqualLower
SEXP LastIntEqualLower(SEXP intVec, SEXP intKey, SEXP lower, SEXP upper);
RcppExport SEXP fst_LastIntEqualLower(SEXP intVecSEXP, SEXP intKeySEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type intVec(intVecSEXP);
    Rcpp::traits::input_parameter< SEXP >::type intKey(intKeySEXP);
    Rcpp::traits::input_parameter< SEXP >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< SEXP >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(LastIntEqualLower(intVec, intKey, lower, upper));
    return rcpp_result_gen;
END_RCPP
}
// LowerBoundIndex
SEXP LowerBoundIndex(SEXP table, SEXP key, SEXP lower, SEXP upper);
RcppExport SEXP fst_LowerBoundIndex(SEXP tableSEXP, SEXP keySEXP, SEXP lowerSEXP, SEXP upperSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP >::type table(tableSEXP);
    Rcpp::traits::input_parameter< SEXP >::type key(keySEXP);
    Rcpp::traits::input_parameter< SEXP >::type lower(lowerSEXP);
    Rcpp::traits::input_parameter< SEXP >::type upper(upperSEXP);
    rcpp_result_gen = Rcpp::wrap(LowerBoundIndex(table, key, lower, upper));
    return rcpp_result_gen;
END_RCPP
}
