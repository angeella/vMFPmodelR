// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// vMFP
List vMFP(arma::mat X, float k, arma::mat Q, arma::mat ref_ds, bool scaling, bool reflection);
RcppExport SEXP _vMFPmodelR_vMFP(SEXP XSEXP, SEXP kSEXP, SEXP QSEXP, SEXP ref_dsSEXP, SEXP scalingSEXP, SEXP reflectionSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< float >::type k(kSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Q(QSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type ref_ds(ref_dsSEXP);
    Rcpp::traits::input_parameter< bool >::type scaling(scalingSEXP);
    Rcpp::traits::input_parameter< bool >::type reflection(reflectionSEXP);
    rcpp_result_gen = Rcpp::wrap(vMFP(X, k, Q, ref_ds, scaling, reflection));
    return rcpp_result_gen;
END_RCPP
}
// svdC
List svdC(arma::mat X);
RcppExport SEXP _vMFPmodelR_svdC(SEXP XSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    rcpp_result_gen = Rcpp::wrap(svdC(X));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_vMFPmodelR_vMFP", (DL_FUNC) &_vMFPmodelR_vMFP, 6},
    {"_vMFPmodelR_svdC", (DL_FUNC) &_vMFPmodelR_svdC, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_vMFPmodelR(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
