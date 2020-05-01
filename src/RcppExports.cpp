// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// Theta_continuous
Rcpp::List Theta_continuous(arma::mat Y, int iter, float delta, float epsilon, int prior_only, int explore);
RcppExport SEXP _BGGM_Theta_continuous(SEXP YSEXP, SEXP iterSEXP, SEXP deltaSEXP, SEXP epsilonSEXP, SEXP prior_onlySEXP, SEXP exploreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< float >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< float >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type prior_only(prior_onlySEXP);
    Rcpp::traits::input_parameter< int >::type explore(exploreSEXP);
    rcpp_result_gen = Rcpp::wrap(Theta_continuous(Y, iter, delta, epsilon, prior_only, explore));
    return rcpp_result_gen;
END_RCPP
}
// sample_prior
Rcpp::List sample_prior(arma::mat Y, int iter, float delta, float epsilon, int prior_only, int explore);
RcppExport SEXP _BGGM_sample_prior(SEXP YSEXP, SEXP iterSEXP, SEXP deltaSEXP, SEXP epsilonSEXP, SEXP prior_onlySEXP, SEXP exploreSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< float >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< float >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type prior_only(prior_onlySEXP);
    Rcpp::traits::input_parameter< int >::type explore(exploreSEXP);
    rcpp_result_gen = Rcpp::wrap(sample_prior(Y, iter, delta, epsilon, prior_only, explore));
    return rcpp_result_gen;
END_RCPP
}
// mv_continuous
Rcpp::List mv_continuous(arma::mat Y, arma::mat X, float delta, float epsilon, int iter);
RcppExport SEXP _BGGM_mv_continuous(SEXP YSEXP, SEXP XSEXP, SEXP deltaSEXP, SEXP epsilonSEXP, SEXP iterSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< float >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< float >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    rcpp_result_gen = Rcpp::wrap(mv_continuous(Y, X, delta, epsilon, iter));
    return rcpp_result_gen;
END_RCPP
}
// trunc_mvn
Rcpp::List trunc_mvn(arma::mat mu, arma::mat rinv, arma::mat z, arma::mat y, arma::rowvec cutpoints);
RcppExport SEXP _BGGM_trunc_mvn(SEXP muSEXP, SEXP rinvSEXP, SEXP zSEXP, SEXP ySEXP, SEXP cutpointsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type mu(muSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type rinv(rinvSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type z(zSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type y(ySEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type cutpoints(cutpointsSEXP);
    rcpp_result_gen = Rcpp::wrap(trunc_mvn(mu, rinv, z, y, cutpoints));
    return rcpp_result_gen;
END_RCPP
}
// mv_binary
Rcpp::List mv_binary(arma::mat Y, arma::mat X, float delta, float epsilon, int iter, float beta_prior, arma::rowvec cutpoints);
RcppExport SEXP _BGGM_mv_binary(SEXP YSEXP, SEXP XSEXP, SEXP deltaSEXP, SEXP epsilonSEXP, SEXP iterSEXP, SEXP beta_priorSEXP, SEXP cutpointsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< float >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< float >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< float >::type beta_prior(beta_priorSEXP);
    Rcpp::traits::input_parameter< arma::rowvec >::type cutpoints(cutpointsSEXP);
    rcpp_result_gen = Rcpp::wrap(mv_binary(Y, X, delta, epsilon, iter, beta_prior, cutpoints));
    return rcpp_result_gen;
END_RCPP
}
// Sigma_i_not_i
arma::mat Sigma_i_not_i(arma::mat x, int index);
RcppExport SEXP _BGGM_Sigma_i_not_i(SEXP xSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(Sigma_i_not_i(x, index));
    return rcpp_result_gen;
END_RCPP
}
// select_col
arma::vec select_col(arma::mat x, int index);
RcppExport SEXP _BGGM_select_col(SEXP xSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(select_col(x, index));
    return rcpp_result_gen;
END_RCPP
}
// select_row
arma::mat select_row(arma::mat x, int index);
RcppExport SEXP _BGGM_select_row(SEXP xSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(select_row(x, index));
    return rcpp_result_gen;
END_RCPP
}
// remove_row
arma::mat remove_row(arma::mat x, int which);
RcppExport SEXP _BGGM_remove_row(SEXP xSEXP, SEXP whichSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type which(whichSEXP);
    rcpp_result_gen = Rcpp::wrap(remove_row(x, which));
    return rcpp_result_gen;
END_RCPP
}
// remove_col
arma::mat remove_col(arma::mat x, int index);
RcppExport SEXP _BGGM_remove_col(SEXP xSEXP, SEXP indexSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type x(xSEXP);
    Rcpp::traits::input_parameter< int >::type index(indexSEXP);
    rcpp_result_gen = Rcpp::wrap(remove_col(x, index));
    return rcpp_result_gen;
END_RCPP
}
// mv_ordinal_cowles
Rcpp::List mv_ordinal_cowles(arma::mat Y, arma::mat X, float delta, float epsilon, int iter, float MH);
RcppExport SEXP _BGGM_mv_ordinal_cowles(SEXP YSEXP, SEXP XSEXP, SEXP deltaSEXP, SEXP epsilonSEXP, SEXP iterSEXP, SEXP MHSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< float >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< float >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< float >::type MH(MHSEXP);
    rcpp_result_gen = Rcpp::wrap(mv_ordinal_cowles(Y, X, delta, epsilon, iter, MH));
    return rcpp_result_gen;
END_RCPP
}
// mv_ordinal_albert
Rcpp::List mv_ordinal_albert(arma::mat Y, arma::mat X, int iter, float delta, float epsilon, int K);
RcppExport SEXP _BGGM_mv_ordinal_albert(SEXP YSEXP, SEXP XSEXP, SEXP iterSEXP, SEXP deltaSEXP, SEXP epsilonSEXP, SEXP KSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type Y(YSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type X(XSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< float >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< float >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< int >::type K(KSEXP);
    rcpp_result_gen = Rcpp::wrap(mv_ordinal_albert(Y, X, iter, delta, epsilon, K));
    return rcpp_result_gen;
END_RCPP
}
// copula
Rcpp::List copula(arma::mat z0_start, arma::mat levels, arma::vec K, arma::mat Sigma_start, int iter, float delta, float epsilon, arma::vec idx);
RcppExport SEXP _BGGM_copula(SEXP z0_startSEXP, SEXP levelsSEXP, SEXP KSEXP, SEXP Sigma_startSEXP, SEXP iterSEXP, SEXP deltaSEXP, SEXP epsilonSEXP, SEXP idxSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< arma::mat >::type z0_start(z0_startSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type levels(levelsSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type K(KSEXP);
    Rcpp::traits::input_parameter< arma::mat >::type Sigma_start(Sigma_startSEXP);
    Rcpp::traits::input_parameter< int >::type iter(iterSEXP);
    Rcpp::traits::input_parameter< float >::type delta(deltaSEXP);
    Rcpp::traits::input_parameter< float >::type epsilon(epsilonSEXP);
    Rcpp::traits::input_parameter< arma::vec >::type idx(idxSEXP);
    rcpp_result_gen = Rcpp::wrap(copula(z0_start, levels, K, Sigma_start, iter, delta, epsilon, idx));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_BGGM_Theta_continuous", (DL_FUNC) &_BGGM_Theta_continuous, 6},
    {"_BGGM_sample_prior", (DL_FUNC) &_BGGM_sample_prior, 6},
    {"_BGGM_mv_continuous", (DL_FUNC) &_BGGM_mv_continuous, 5},
    {"_BGGM_trunc_mvn", (DL_FUNC) &_BGGM_trunc_mvn, 5},
    {"_BGGM_mv_binary", (DL_FUNC) &_BGGM_mv_binary, 7},
    {"_BGGM_Sigma_i_not_i", (DL_FUNC) &_BGGM_Sigma_i_not_i, 2},
    {"_BGGM_select_col", (DL_FUNC) &_BGGM_select_col, 2},
    {"_BGGM_select_row", (DL_FUNC) &_BGGM_select_row, 2},
    {"_BGGM_remove_row", (DL_FUNC) &_BGGM_remove_row, 2},
    {"_BGGM_remove_col", (DL_FUNC) &_BGGM_remove_col, 2},
    {"_BGGM_mv_ordinal_cowles", (DL_FUNC) &_BGGM_mv_ordinal_cowles, 6},
    {"_BGGM_mv_ordinal_albert", (DL_FUNC) &_BGGM_mv_ordinal_albert, 6},
    {"_BGGM_copula", (DL_FUNC) &_BGGM_copula, 8},
    {NULL, NULL, 0}
};

RcppExport void R_init_BGGM(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
