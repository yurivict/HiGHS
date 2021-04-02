/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/*                                                                       */
/*    This file is part of the HiGHS linear optimization suite           */
/*                                                                       */
/*    Written and engineered 2008-2020 at the University of Edinburgh    */
/*                                                                       */
/*    Available as open-source under the MIT License                     */
/*                                                                       */
/* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * */
/**@file util/HighsLinearSumBounds.h
 * @brief Data structure to compute and update bounds on a linear sum of
 * variables with finite or infinite bounds
 * @author Leona Gottwald
 */

#ifndef HIGHS_LINEAR_SUM_BOUNDS_H_
#define HIGHS_LINEAR_SUM_BOUNDS_H_

#include <vector>

#include "lp_data/HConst.h"
#include "util/HighsCDouble.h"

class HighsLinearSumBounds {
  std::vector<HighsCDouble> sumLowerOrig;
  std::vector<HighsCDouble> sumUpperOrig;
  std::vector<HighsInt> numInfSumLowerOrig;
  std::vector<HighsInt> numInfSumUpperOrig;
  std::vector<HighsCDouble> sumLower;
  std::vector<HighsCDouble> sumUpper;
  std::vector<HighsInt> numInfSumLower;
  std::vector<HighsInt> numInfSumUpper;
  const double* varLower;
  const double* varUpper;
  const double* implVarLower;
  const double* implVarUpper;
  const HighsInt* implVarLowerSource;
  const HighsInt* implVarUpperSource;

 public:
  void setNumSums(HighsInt numSums) {
    numInfSumLower.resize(numSums);
    numInfSumUpper.resize(numSums);
    sumLower.resize(numSums);
    sumUpper.resize(numSums);
    numInfSumLowerOrig.resize(numSums);
    numInfSumUpperOrig.resize(numSums);
    sumLowerOrig.resize(numSums);
    sumUpperOrig.resize(numSums);
  }

  void setBoundArrays(const double* varLower, const double* varUpper,
                      const double* implVarLower, const double* implVarUpper,
                      const HighsInt* implVarLowerSource,
                      const HighsInt* implVarUpperSource) {
    this->varLower = varLower;
    this->varUpper = varUpper;
    this->implVarLower = implVarLower;
    this->implVarUpper = implVarUpper;
    this->implVarLowerSource = implVarLowerSource;
    this->implVarUpperSource = implVarUpperSource;
  }

  void add(HighsInt sum, HighsInt var, double coefficient);

  void remove(HighsInt sum, HighsInt var, double coefficient);

  void updatedVarUpper(HighsInt sum, HighsInt var, double coefficient,
                       double oldVarUpper);

  void updatedVarLower(HighsInt sum, HighsInt var, double coefficient,
                       double oldVarLower);

  void updatedImplVarUpper(HighsInt sum, HighsInt var, double coefficient,
                           double oldImplVarUpper,
                           HighsInt oldImplVarUpperSource);

  void updatedImplVarLower(HighsInt sum, HighsInt var, double coefficient,
                           double oldImplVarLower,
                           HighsInt oldImplVarLowerSource);

  double getResidualSumLower(HighsInt sum, HighsInt var,
                             double coefficient) const;

  double getResidualSumUpper(HighsInt sum, HighsInt var,
                             double coefficient) const;

  double getResidualSumLowerOrig(HighsInt sum, HighsInt var,
                                 double coefficient) const;

  double getResidualSumUpperOrig(HighsInt sum, HighsInt var,
                                 double coefficient) const;

  double getSumLowerOrig(HighsInt sum) const {
    return numInfSumLowerOrig[sum] == 0 ? double(sumLowerOrig[sum])
                                        : -HIGHS_CONST_INF;
  }

  double getSumUpperOrig(HighsInt sum) const {
    return numInfSumUpperOrig[sum] == 0 ? double(sumUpperOrig[sum])
                                        : HIGHS_CONST_INF;
  }

  double getSumLower(HighsInt sum) const {
    return numInfSumLower[sum] == 0 ? double(sumLower[sum]) : -HIGHS_CONST_INF;
  }

  double getSumUpper(HighsInt sum) const {
    return numInfSumUpper[sum] == 0 ? double(sumUpper[sum]) : HIGHS_CONST_INF;
  }

  double getSumLower(HighsInt sum, double offset) const {
    return numInfSumLower[sum] == 0 ? double(sumLower[sum] + offset)
                                    : -HIGHS_CONST_INF;
  }

  double getSumUpper(HighsInt sum, double offset) const {
    return numInfSumUpper[sum] == 0 ? double(sumUpper[sum] + offset)
                                    : HIGHS_CONST_INF;
  }

  double getSumLower(HighsInt sum, HighsCDouble offset) const {
    return numInfSumLower[sum] == 0 ? double(sumLower[sum] + offset)
                                    : -HIGHS_CONST_INF;
  }

  double getSumUpper(HighsInt sum, HighsCDouble offset) const {
    return numInfSumUpper[sum] == 0 ? double(sumUpper[sum] + offset)
                                    : HIGHS_CONST_INF;
  }

  HighsInt getNumInfSumLower(HighsInt sum) const { return numInfSumLower[sum]; }

  HighsInt getNumInfSumUpper(HighsInt sum) const { return numInfSumUpper[sum]; }

  HighsInt getNumInfSumLowerOrig(HighsInt sum) const {
    return numInfSumLowerOrig[sum];
  }

  HighsInt getNumInfSumUpperOrig(HighsInt sum) const {
    return numInfSumUpperOrig[sum];
  }

  void shrink(const std::vector<HighsInt>& newIndices, HighsInt newSize);
};

#endif