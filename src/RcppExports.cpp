// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppEigen.h>
#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

// cva
List cva(NumericMatrix gamma_initial, NumericVector vy_in, NumericMatrix mX_in, const int K, const double lambda, std::string prior, const bool bUnique);
RcppExport SEXP blma_cva(SEXP gamma_initialSEXP, SEXP vy_inSEXP, SEXP mX_inSEXP, SEXP KSEXP, SEXP lambdaSEXP, SEXP priorSEXP, SEXP bUniqueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericMatrix >::type gamma_initial(gamma_initialSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type vy_in(vy_inSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type mX_in(mX_inSEXP);
    Rcpp::traits::input_parameter< const int >::type K(KSEXP);
    Rcpp::traits::input_parameter< const double >::type lambda(lambdaSEXP);
    Rcpp::traits::input_parameter< std::string >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< const bool >::type bUnique(bUniqueSEXP);
    rcpp_result_gen = Rcpp::wrap(cva(gamma_initial, vy_in, mX_in, K, lambda, prior, bUnique));
    return rcpp_result_gen;
END_RCPP
}
// blma
List blma(NumericVector vy, NumericMatrix mX, std::string prior, std::string modelprior, Nullable<NumericVector> modelpriorvec, int cores);
RcppExport SEXP blma_blma(SEXP vySEXP, SEXP mXSEXP, SEXP priorSEXP, SEXP modelpriorSEXP, SEXP modelpriorvecSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vy(vySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type mX(mXSEXP);
    Rcpp::traits::input_parameter< std::string >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< std::string >::type modelprior(modelpriorSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type modelpriorvec(modelpriorvecSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(blma(vy, mX, prior, modelprior, modelpriorvec, cores));
    return rcpp_result_gen;
END_RCPP
}
// blma_fixed
List blma_fixed(NumericVector vy, NumericMatrix mX, NumericMatrix mZ, std::string prior, std::string modelprior, Nullable<NumericVector> modelpriorvec, int cores);
RcppExport SEXP blma_blma_fixed(SEXP vySEXP, SEXP mXSEXP, SEXP mZSEXP, SEXP priorSEXP, SEXP modelpriorSEXP, SEXP modelpriorvecSEXP, SEXP coresSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type vy(vySEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type mX(mXSEXP);
    Rcpp::traits::input_parameter< NumericMatrix >::type mZ(mZSEXP);
    Rcpp::traits::input_parameter< std::string >::type prior(priorSEXP);
    Rcpp::traits::input_parameter< std::string >::type modelprior(modelpriorSEXP);
    Rcpp::traits::input_parameter< Nullable<NumericVector> >::type modelpriorvec(modelpriorvecSEXP);
    Rcpp::traits::input_parameter< int >::type cores(coresSEXP);
    rcpp_result_gen = Rcpp::wrap(blma_fixed(vy, mX, mZ, prior, modelprior, modelpriorvec, cores));
    return rcpp_result_gen;
END_RCPP
}
// graycode
IntegerMatrix graycode(unsigned int varying, unsigned int fixed);
RcppExport SEXP blma_graycode(SEXP varyingSEXP, SEXP fixedSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< unsigned int >::type varying(varyingSEXP);
    Rcpp::traits::input_parameter< unsigned int >::type fixed(fixedSEXP);
    rcpp_result_gen = Rcpp::wrap(graycode(varying, fixed));
    return rcpp_result_gen;
END_RCPP
}
