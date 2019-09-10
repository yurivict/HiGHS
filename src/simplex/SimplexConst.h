/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                       */
/*    This file is part of the HiGHS linear optimization suite           */
/*                                                                       */
/*    Written and engineered 2008-2019 at the University of Edinburgh    */
/*                                                                       */
/*    Available as open-source under the MIT License                     */
/*                                                                       */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**@file lp_data/SimplexConst.h
 * @brief Constants for HiGHS simplex solvers
 * @author Julian Hall, Ivet Galabova, Qi Huangfu and Michael Feldmeier
 */
#ifndef SIMPLEX_SIMPLEXCONST_H_
#define SIMPLEX_SIMPLEXCONST_H_

enum class SimplexSolutionStatus {
  UNSET = -1,
  OPTIMAL,
  PRIMAL_FEASIBLE,
  DUAL_FEASIBLE,
  INFEASIBLE,
  UNBOUNDED,
  SINGULAR,
  FAILED,
  REACHED_DUAL_OBJECTIVE_VALUE_UPPER_BOUND,
  OUT_OF_TIME
};

enum SimplexStrategy {
  SIMPLEX_STRATEGY_MIN = 0,
  SIMPLEX_STRATEGY_CHOOSE = SIMPLEX_STRATEGY_MIN,
  SIMPLEX_STRATEGY_DUAL,
  SIMPLEX_STRATEGY_DUAL_PLAIN = SIMPLEX_STRATEGY_DUAL,
  SIMPLEX_STRATEGY_DUAL_TASKS,
  SIMPLEX_STRATEGY_DUAL_MULTI,
  SIMPLEX_STRATEGY_PRIMAL,
  SIMPLEX_STRATEGY_MAX = SIMPLEX_STRATEGY_PRIMAL
};

enum SimplexScaleStrategy {
  SIMPLEX_SCALE_STRATEGY_MIN = 0,
  SIMPLEX_SCALE_STRATEGY_OFF = SIMPLEX_SCALE_STRATEGY_MIN,
  SIMPLEX_SCALE_STRATEGY_HIGHS,
  SIMPLEX_SCALE_STRATEGY_HSOL,
  SIMPLEX_SCALE_STRATEGY_MAX = SIMPLEX_SCALE_STRATEGY_HSOL
};

enum SimplexCrashStrategy {
  SIMPLEX_CRASH_STRATEGY_MIN = 0,
  SIMPLEX_CRASH_STRATEGY_OFF = SIMPLEX_CRASH_STRATEGY_MIN,
  SIMPLEX_CRASH_STRATEGY_LTSSF_K,
  SIMPLEX_CRASH_STRATEGY_LTSSF = SIMPLEX_CRASH_STRATEGY_LTSSF_K,
  SIMPLEX_CRASH_STRATEGY_BIXBY,
  SIMPLEX_CRASH_STRATEGY_LTSSF_PRI,
  SIMPLEX_CRASH_STRATEGY_LTSF_K,
  SIMPLEX_CRASH_STRATEGY_LTSF_PRI,
  SIMPLEX_CRASH_STRATEGY_LTSF,
  SIMPLEX_CRASH_STRATEGY_BIXBY_NO_NONZERO_COL_COSTS,
  SIMPLEX_CRASH_STRATEGY_BASIC,
  SIMPLEX_CRASH_STRATEGY_TEST_SING,
  SIMPLEX_CRASH_STRATEGY_MAX = SIMPLEX_CRASH_STRATEGY_TEST_SING
};

enum SimplexDualEdgeWeightStrategy {
  SIMPLEX_DUAL_EDGE_WEIGHT_STRATEGY_MIN = 0,
  SIMPLEX_DUAL_EDGE_WEIGHT_STRATEGY_DANTZIG = SIMPLEX_DUAL_EDGE_WEIGHT_STRATEGY_MIN,
  SIMPLEX_DUAL_EDGE_WEIGHT_STRATEGY_DEVEX,
  SIMPLEX_DUAL_EDGE_WEIGHT_STRATEGY_STEEPEST_EDGE_TO_DEVEX_SWITCH,
  SIMPLEX_DUAL_EDGE_WEIGHT_STRATEGY_STEEPEST_EDGE,
  SIMPLEX_DUAL_EDGE_WEIGHT_STRATEGY_STEEPEST_EDGE_UNIT_INITIAL,
  SIMPLEX_DUAL_EDGE_WEIGHT_STRATEGY_MAX = SIMPLEX_DUAL_EDGE_WEIGHT_STRATEGY_STEEPEST_EDGE_UNIT_INITIAL
};

enum SimplexPrimalEdgeWeightStrategy {
  SIMPLEX_PRIMAL_EDGE_WEIGHT_STRATEGY_MIN = 0,
  SIMPLEX_PRIMAL_EDGE_WEIGHT_STRATEGY_DANTZIG = SIMPLEX_PRIMAL_EDGE_WEIGHT_STRATEGY_MIN,
  SIMPLEX_PRIMAL_EDGE_WEIGHT_STRATEGY_DEVEX,
  SIMPLEX_PRIMAL_EDGE_WEIGHT_STRATEGY_MAX = SIMPLEX_PRIMAL_EDGE_WEIGHT_STRATEGY_DEVEX
};

enum SimplexPriceStrategy {
  SIMPLEX_PRICE_STRATEGY_MIN = 0,
  SIMPLEX_PRICE_STRATEGY_COL = SIMPLEX_PRICE_STRATEGY_MIN,
  SIMPLEX_PRICE_STRATEGY_ROW,
  SIMPLEX_PRICE_STRATEGY_ROW_SWITCH,
  SIMPLEX_PRICE_STRATEGY_ROW_SWITCH_COL_SWITCH,
  SIMPLEX_PRICE_STRATEGY_ROW_ULTRA,
  SIMPLEX_PRICE_STRATEGY_MAX = SIMPLEX_PRICE_STRATEGY_ROW_ULTRA
};

// Not an enum class since invert_hint is used in so many places
enum InvertHint {
  INVERT_HINT_NO = 0,
  INVERT_HINT_UPDATE_LIMIT_REACHED,
  INVERT_HINT_SYNTHETIC_CLOCK_SAYS_INVERT,
  INVERT_HINT_POSSIBLY_OPTIMAL,
  INVERT_HINT_POSSIBLY_PRIMAL_UNBOUNDED,
  INVERT_HINT_POSSIBLY_DUAL_UNBOUNDED,
  INVERT_HINT_POSSIBLY_SINGULAR_BASIS,
  INVERT_HINT_PRIMAL_INFEASIBLE_IN_PRIMAL_SIMPLEX,
  INVERT_HINT_CHOOSE_COLUMN_FAIL,
  INVERT_HINT_Count
};

// TODO: Set this false tactically to make mip interface more
// efficient by preventing reinversion on optimality in phase 1 or
// phase 2
const bool invert_if_row_out_negative = true;

enum FeasibilityStrategy {
  FEASIBILITY_STRATEGY_MIN = 0,
  FEASIBILITY_STRATEGY_kApproxComponentWise = FEASIBILITY_STRATEGY_MIN,
  FEASIBILITY_STRATEGY_kApproxExact,
  FEASIBILITY_STRATEGY_kDirectSolve,
  FEASIBILITY_STRATEGY_MAX = FEASIBILITY_STRATEGY_kDirectSolve
};

#endif /* SIMPLEX_SIMPLEXCONST_H_ */
