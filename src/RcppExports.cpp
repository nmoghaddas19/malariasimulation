// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include "malariasimulation_types.h"
#include <Rcpp.h>

using namespace Rcpp;

// create_adult_mosquito_model
Rcpp::XPtr<AdultMosquitoModel> create_adult_mosquito_model(Rcpp::XPtr<MosquitoModel> growth_model, double mu, double tau, double susceptible);
RcppExport SEXP _malariasimulation_create_adult_mosquito_model(SEXP growth_modelSEXP, SEXP muSEXP, SEXP tauSEXP, SEXP susceptibleSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<MosquitoModel> >::type growth_model(growth_modelSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type tau(tauSEXP);
    Rcpp::traits::input_parameter< double >::type susceptible(susceptibleSEXP);
    rcpp_result_gen = Rcpp::wrap(create_adult_mosquito_model(growth_model, mu, tau, susceptible));
    return rcpp_result_gen;
END_RCPP
}
// adult_mosquito_model_update
void adult_mosquito_model_update(Rcpp::XPtr<AdultMosquitoModel> model, double mu, double foim, double susceptible, double f);
RcppExport SEXP _malariasimulation_adult_mosquito_model_update(SEXP modelSEXP, SEXP muSEXP, SEXP foimSEXP, SEXP susceptibleSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<AdultMosquitoModel> >::type model(modelSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type foim(foimSEXP);
    Rcpp::traits::input_parameter< double >::type susceptible(susceptibleSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    adult_mosquito_model_update(model, mu, foim, susceptible, f);
    return R_NilValue;
END_RCPP
}
// create_adult_solver
Rcpp::XPtr<Solver> create_adult_solver(Rcpp::XPtr<AdultMosquitoModel> model, std::vector<double> init);
RcppExport SEXP _malariasimulation_create_adult_solver(SEXP modelSEXP, SEXP initSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<AdultMosquitoModel> >::type model(modelSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type init(initSEXP);
    rcpp_result_gen = Rcpp::wrap(create_adult_solver(model, init));
    return rcpp_result_gen;
END_RCPP
}
// create_history
Rcpp::XPtr<History> create_history(size_t size, double default_value);
RcppExport SEXP _malariasimulation_create_history(SEXP sizeSEXP, SEXP default_valueSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< size_t >::type size(sizeSEXP);
    Rcpp::traits::input_parameter< double >::type default_value(default_valueSEXP);
    rcpp_result_gen = Rcpp::wrap(create_history(size, default_value));
    return rcpp_result_gen;
END_RCPP
}
// history_at
double history_at(Rcpp::XPtr<History> history, double timestep);
RcppExport SEXP _malariasimulation_history_at(SEXP historySEXP, SEXP timestepSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<History> >::type history(historySEXP);
    Rcpp::traits::input_parameter< double >::type timestep(timestepSEXP);
    rcpp_result_gen = Rcpp::wrap(history_at(history, timestep));
    return rcpp_result_gen;
END_RCPP
}
// history_push
void history_push(Rcpp::XPtr<History> history, double value, double timestep);
RcppExport SEXP _malariasimulation_history_push(SEXP historySEXP, SEXP valueSEXP, SEXP timestepSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<History> >::type history(historySEXP);
    Rcpp::traits::input_parameter< double >::type value(valueSEXP);
    Rcpp::traits::input_parameter< double >::type timestep(timestepSEXP);
    history_push(history, value, timestep);
    return R_NilValue;
END_RCPP
}
// carrying_capacity
double carrying_capacity(const size_t timestep, const bool model_seasonality, const double g0, const std::vector<double>& g, const std::vector<double>& h, const double K0, const double R_bar);
RcppExport SEXP _malariasimulation_carrying_capacity(SEXP timestepSEXP, SEXP model_seasonalitySEXP, SEXP g0SEXP, SEXP gSEXP, SEXP hSEXP, SEXP K0SEXP, SEXP R_barSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const size_t >::type timestep(timestepSEXP);
    Rcpp::traits::input_parameter< const bool >::type model_seasonality(model_seasonalitySEXP);
    Rcpp::traits::input_parameter< const double >::type g0(g0SEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type g(gSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type h(hSEXP);
    Rcpp::traits::input_parameter< const double >::type K0(K0SEXP);
    Rcpp::traits::input_parameter< const double >::type R_bar(R_barSEXP);
    rcpp_result_gen = Rcpp::wrap(carrying_capacity(timestep, model_seasonality, g0, g, h, K0, R_bar));
    return rcpp_result_gen;
END_RCPP
}
// eggs_laid
double eggs_laid(double beta, double mu, double f);
RcppExport SEXP _malariasimulation_eggs_laid(SEXP betaSEXP, SEXP muSEXP, SEXP fSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type mu(muSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    rcpp_result_gen = Rcpp::wrap(eggs_laid(beta, mu, f));
    return rcpp_result_gen;
END_RCPP
}
// rainfall
double rainfall(const size_t t, const double g0, const std::vector<double>& g, const std::vector<double>& h);
RcppExport SEXP _malariasimulation_rainfall(SEXP tSEXP, SEXP g0SEXP, SEXP gSEXP, SEXP hSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const size_t >::type t(tSEXP);
    Rcpp::traits::input_parameter< const double >::type g0(g0SEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type g(gSEXP);
    Rcpp::traits::input_parameter< const std::vector<double>& >::type h(hSEXP);
    rcpp_result_gen = Rcpp::wrap(rainfall(t, g0, g, h));
    return rcpp_result_gen;
END_RCPP
}
// create_mosquito_emergence_process_cpp
Rcpp::XPtr<process_t> create_mosquito_emergence_process_cpp(Rcpp::List solvers, Rcpp::XPtr<CategoricalVariable> state, Rcpp::XPtr<CategoricalVariable> species, std::vector<std::string> species_names, double dpl);
RcppExport SEXP _malariasimulation_create_mosquito_emergence_process_cpp(SEXP solversSEXP, SEXP stateSEXP, SEXP speciesSEXP, SEXP species_namesSEXP, SEXP dplSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type solvers(solversSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<CategoricalVariable> >::type state(stateSEXP);
    Rcpp::traits::input_parameter< Rcpp::XPtr<CategoricalVariable> >::type species(speciesSEXP);
    Rcpp::traits::input_parameter< std::vector<std::string> >::type species_names(species_namesSEXP);
    Rcpp::traits::input_parameter< double >::type dpl(dplSEXP);
    rcpp_result_gen = Rcpp::wrap(create_mosquito_emergence_process_cpp(solvers, state, species, species_names, dpl));
    return rcpp_result_gen;
END_RCPP
}
// create_mosquito_model
Rcpp::XPtr<MosquitoModel> create_mosquito_model(double beta, double de, double mue, double K0, double gamma, double dl, double mul, double dp, double mup, size_t total_M, bool model_seasonality, double g0, std::vector<double> g, std::vector<double> h, double R_bar);
RcppExport SEXP _malariasimulation_create_mosquito_model(SEXP betaSEXP, SEXP deSEXP, SEXP mueSEXP, SEXP K0SEXP, SEXP gammaSEXP, SEXP dlSEXP, SEXP mulSEXP, SEXP dpSEXP, SEXP mupSEXP, SEXP total_MSEXP, SEXP model_seasonalitySEXP, SEXP g0SEXP, SEXP gSEXP, SEXP hSEXP, SEXP R_barSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< double >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< double >::type de(deSEXP);
    Rcpp::traits::input_parameter< double >::type mue(mueSEXP);
    Rcpp::traits::input_parameter< double >::type K0(K0SEXP);
    Rcpp::traits::input_parameter< double >::type gamma(gammaSEXP);
    Rcpp::traits::input_parameter< double >::type dl(dlSEXP);
    Rcpp::traits::input_parameter< double >::type mul(mulSEXP);
    Rcpp::traits::input_parameter< double >::type dp(dpSEXP);
    Rcpp::traits::input_parameter< double >::type mup(mupSEXP);
    Rcpp::traits::input_parameter< size_t >::type total_M(total_MSEXP);
    Rcpp::traits::input_parameter< bool >::type model_seasonality(model_seasonalitySEXP);
    Rcpp::traits::input_parameter< double >::type g0(g0SEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type g(gSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type h(hSEXP);
    Rcpp::traits::input_parameter< double >::type R_bar(R_barSEXP);
    rcpp_result_gen = Rcpp::wrap(create_mosquito_model(beta, de, mue, K0, gamma, dl, mul, dp, mup, total_M, model_seasonality, g0, g, h, R_bar));
    return rcpp_result_gen;
END_RCPP
}
// mosquito_model_update
void mosquito_model_update(Rcpp::XPtr<MosquitoModel> model, size_t total_M, double f, double mum);
RcppExport SEXP _malariasimulation_mosquito_model_update(SEXP modelSEXP, SEXP total_MSEXP, SEXP fSEXP, SEXP mumSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<MosquitoModel> >::type model(modelSEXP);
    Rcpp::traits::input_parameter< size_t >::type total_M(total_MSEXP);
    Rcpp::traits::input_parameter< double >::type f(fSEXP);
    Rcpp::traits::input_parameter< double >::type mum(mumSEXP);
    mosquito_model_update(model, total_M, f, mum);
    return R_NilValue;
END_RCPP
}
// create_solver
Rcpp::XPtr<Solver> create_solver(Rcpp::XPtr<MosquitoModel> model, std::vector<double> init);
RcppExport SEXP _malariasimulation_create_solver(SEXP modelSEXP, SEXP initSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<MosquitoModel> >::type model(modelSEXP);
    Rcpp::traits::input_parameter< std::vector<double> >::type init(initSEXP);
    rcpp_result_gen = Rcpp::wrap(create_solver(model, init));
    return rcpp_result_gen;
END_RCPP
}
// solver_get_states
std::vector<double> solver_get_states(Rcpp::XPtr<Solver> solver);
RcppExport SEXP _malariasimulation_solver_get_states(SEXP solverSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<Solver> >::type solver(solverSEXP);
    rcpp_result_gen = Rcpp::wrap(solver_get_states(solver));
    return rcpp_result_gen;
END_RCPP
}
// solver_step
void solver_step(Rcpp::XPtr<Solver> solver);
RcppExport SEXP _malariasimulation_solver_step(SEXP solverSEXP) {
BEGIN_RCPP
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::XPtr<Solver> >::type solver(solverSEXP);
    solver_step(solver);
    return R_NilValue;
END_RCPP
}
// bernoulli_multi_p_cpp
std::vector<size_t> bernoulli_multi_p_cpp(const std::vector<double> p);
RcppExport SEXP _malariasimulation_bernoulli_multi_p_cpp(SEXP pSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const std::vector<double> >::type p(pSEXP);
    rcpp_result_gen = Rcpp::wrap(bernoulli_multi_p_cpp(p));
    return rcpp_result_gen;
END_RCPP
}

RcppExport SEXP run_testthat_tests();

static const R_CallMethodDef CallEntries[] = {
    {"_malariasimulation_create_adult_mosquito_model", (DL_FUNC) &_malariasimulation_create_adult_mosquito_model, 4},
    {"_malariasimulation_adult_mosquito_model_update", (DL_FUNC) &_malariasimulation_adult_mosquito_model_update, 5},
    {"_malariasimulation_create_adult_solver", (DL_FUNC) &_malariasimulation_create_adult_solver, 2},
    {"_malariasimulation_create_history", (DL_FUNC) &_malariasimulation_create_history, 2},
    {"_malariasimulation_history_at", (DL_FUNC) &_malariasimulation_history_at, 2},
    {"_malariasimulation_history_push", (DL_FUNC) &_malariasimulation_history_push, 3},
    {"_malariasimulation_carrying_capacity", (DL_FUNC) &_malariasimulation_carrying_capacity, 7},
    {"_malariasimulation_eggs_laid", (DL_FUNC) &_malariasimulation_eggs_laid, 3},
    {"_malariasimulation_rainfall", (DL_FUNC) &_malariasimulation_rainfall, 4},
    {"_malariasimulation_create_mosquito_emergence_process_cpp", (DL_FUNC) &_malariasimulation_create_mosquito_emergence_process_cpp, 5},
    {"_malariasimulation_create_mosquito_model", (DL_FUNC) &_malariasimulation_create_mosquito_model, 15},
    {"_malariasimulation_mosquito_model_update", (DL_FUNC) &_malariasimulation_mosquito_model_update, 4},
    {"_malariasimulation_create_solver", (DL_FUNC) &_malariasimulation_create_solver, 2},
    {"_malariasimulation_solver_get_states", (DL_FUNC) &_malariasimulation_solver_get_states, 1},
    {"_malariasimulation_solver_step", (DL_FUNC) &_malariasimulation_solver_step, 1},
    {"_malariasimulation_bernoulli_multi_p_cpp", (DL_FUNC) &_malariasimulation_bernoulli_multi_p_cpp, 1},
    {"run_testthat_tests", (DL_FUNC) &run_testthat_tests, 0},
    {NULL, NULL, 0}
};

RcppExport void R_init_malariasimulation(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
