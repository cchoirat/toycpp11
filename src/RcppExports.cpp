// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// useCpp11
int useCpp11();
RcppExport SEXP _toycpp11_useCpp11() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(useCpp11());
    return rcpp_result_gen;
END_RCPP
}
// myhypot
double myhypot(double x, double y);
RcppExport SEXP _toycpp11_myhypot(SEXP xSEXP, SEXP ySEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type x(xSEXP);
    Rcpp::traits::input_parameter< double >::type y(ySEXP);
    rcpp_result_gen = Rcpp::wrap(myhypot(x, y));
    return rcpp_result_gen;
END_RCPP
}
// useAuto
int useAuto();
RcppExport SEXP _toycpp11_useAuto() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(useAuto());
    return rcpp_result_gen;
END_RCPP
}
// rcpp_hello_world
List rcpp_hello_world();
RcppExport SEXP _toycpp11_rcpp_hello_world() {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    rcpp_result_gen = Rcpp::wrap(rcpp_hello_world());
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_toycpp11_useCpp11", (DL_FUNC) &_toycpp11_useCpp11, 0},
    {"_toycpp11_myhypot", (DL_FUNC) &_toycpp11_myhypot, 2},
    {"_toycpp11_useAuto", (DL_FUNC) &_toycpp11_useAuto, 0},
    {"_toycpp11_rcpp_hello_world", (DL_FUNC) &_toycpp11_rcpp_hello_world, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_toycpp11(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
