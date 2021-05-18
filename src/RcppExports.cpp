// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// cpp_partitions
std::list< std::vector<int> > cpp_partitions(int n, int max, int length, bool perm, bool fill, bool equal);
RcppExport SEXP _calculus_cpp_partitions(SEXP nSEXP, SEXP maxSEXP, SEXP lengthSEXP, SEXP permSEXP, SEXP fillSEXP, SEXP equalSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    Rcpp::traits::input_parameter< int >::type max(maxSEXP);
    Rcpp::traits::input_parameter< int >::type length(lengthSEXP);
    Rcpp::traits::input_parameter< bool >::type perm(permSEXP);
    Rcpp::traits::input_parameter< bool >::type fill(fillSEXP);
    Rcpp::traits::input_parameter< bool >::type equal(equalSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_partitions(n, max, length, perm, fill, equal));
    return rcpp_result_gen;
END_RCPP
}
// cpp_parity
std::vector<int> cpp_parity(Rcpp::NumericMatrix x, Rcpp::NumericMatrix y);
RcppExport SEXP _calculus_cpp_parity(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type x(xSEXP);
    Rcpp::traits::input_parameter< Rcpp::NumericMatrix >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_parity(x, y));
    return rcpp_result_gen;
END_RCPP
}
// cpp_paste
std::vector<std::string> cpp_paste(std::vector<std::string> const& x, std::vector<std::string> const& y, std::string const sep);
RcppExport SEXP _calculus_cpp_paste(SEXP xSEXP, SEXP ySEXP, SEXP sepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::string const >::type sep(sepSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_paste(x, y, sep));
    return rcpp_result_gen;
END_RCPP
}
// cpp_collapse
std::string cpp_collapse(std::vector<std::string> const& x, std::string const sep);
RcppExport SEXP _calculus_cpp_collapse(SEXP xSEXP, SEXP sepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::string const >::type sep(sepSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_collapse(x, sep));
    return rcpp_result_gen;
END_RCPP
}
// cpp_inner
std::string cpp_inner(std::vector<std::string> const& x, std::vector<std::string> const& y);
RcppExport SEXP _calculus_cpp_inner(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_inner(x, y));
    return rcpp_result_gen;
END_RCPP
}
// cpp_outer
std::vector<std::string> cpp_outer(std::vector<std::string> const& x, std::vector<std::string> const& y);
RcppExport SEXP _calculus_cpp_outer(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> const& >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_outer(x, y));
    return rcpp_result_gen;
END_RCPP
}
// cpp_einstein
SEXP cpp_einstein(SEXP const& x, SEXP const& y, std::vector<int> const& dim, bool drop);
RcppExport SEXP _calculus_cpp_einstein(SEXP xSEXP, SEXP ySEXP, SEXP dimSEXP, SEXP dropSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< SEXP const& >::type y(ySEXP);
    Rcpp::traits::input_parameter< std::vector<int> const& >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< bool >::type drop(dropSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_einstein(x, y, dim, drop));
    return rcpp_result_gen;
END_RCPP
}
// cpp_trace
SEXP cpp_trace(SEXP const& x, std::vector<int> const& dim, bool drop);
RcppExport SEXP _calculus_cpp_trace(SEXP xSEXP, SEXP dimSEXP, SEXP dropSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< std::vector<int> const& >::type dim(dimSEXP);
    Rcpp::traits::input_parameter< bool >::type drop(dropSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_trace(x, dim, drop));
    return rcpp_result_gen;
END_RCPP
}
// cpp_det
SEXP cpp_det(SEXP const& x, int n);
RcppExport SEXP _calculus_cpp_det(SEXP xSEXP, SEXP nSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< SEXP const& >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type n(nSEXP);
    rcpp_result_gen = Rcpp::wrap(cpp_det(x, n));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_calculus_cpp_partitions", (DL_FUNC) &_calculus_cpp_partitions, 6},
    {"_calculus_cpp_parity", (DL_FUNC) &_calculus_cpp_parity, 2},
    {"_calculus_cpp_paste", (DL_FUNC) &_calculus_cpp_paste, 3},
    {"_calculus_cpp_collapse", (DL_FUNC) &_calculus_cpp_collapse, 2},
    {"_calculus_cpp_inner", (DL_FUNC) &_calculus_cpp_inner, 2},
    {"_calculus_cpp_outer", (DL_FUNC) &_calculus_cpp_outer, 2},
    {"_calculus_cpp_einstein", (DL_FUNC) &_calculus_cpp_einstein, 4},
    {"_calculus_cpp_trace", (DL_FUNC) &_calculus_cpp_trace, 3},
    {"_calculus_cpp_det", (DL_FUNC) &_calculus_cpp_det, 2},
    {NULL, NULL, 0}
};

RcppExport void R_init_calculus(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}