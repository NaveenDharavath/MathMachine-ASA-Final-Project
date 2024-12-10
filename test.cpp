#include <deepstate/DeepState.hpp>
#include "mathmachine.cpp"

using namespace deepstate;

TEST(MathMachine, BasicOperations) {
  int choice = DeepState_IntInRange(1, 22);
  double nums[2];
  nums[0] = DeepState_DoubleInRange(1, 100);
  nums[1] = DeepState_DoubleInRange(1, 100);

  double result = mathmachine(choice, nums);

  ASSERT(!std::isnan(result)) << "Result is NaN for choice: " << choice;
  ASSERT(std::isfinite(result)) << "Result is not finite for choice: " << choice;
}

TEST(MathMachine, HyperbolicFunctions) {
  double nums[] = {1.0};
  double sinh_val = std::sinh(1.0);
  double cosh_val = std::cosh(1.0);
  double tanh_val = std::tanh(1.0);

  ASSERT(std::fabs(hyperbolic_sin(nums) - sinh_val) <= 1e-6)
    << "Hyperbolic sine test failed: Expected " << sinh_val << " but got " << hyperbolic_sin(nums);

  ASSERT(std::fabs(hyperbolic_cos(nums) - cosh_val) <= 1e-6)
    << "Hyperbolic cosine test failed: Expected " << cosh_val << " but got " << hyperbolic_cos(nums);

  ASSERT(std::fabs(hyperbolic_tan(nums) - tanh_val) <= 1e-6)
    << "Hyperbolic tangent test failed: Expected " << tanh_val << " but got " << hyperbolic_tan(nums);
}

TEST(MathMachine, LogarithmBase) {
  double nums[] = {8.0, 2.0};
  double expected_log = 3.0;

  ASSERT(std::fabs(logarithm_base(nums) - expected_log) <= 1e-6)
    << "Logarithm base test failed: Expected " << expected_log << " but got " << logarithm_base(nums);
}

TEST(MathMachine, Combination) {
  double nums[] = {5.0, 2.0};
  double expected_comb = 10.0;

  ASSERT(std::fabs(combination(nums) - expected_comb) <= 1e-6)
    << "Combination test failed: Expected " << expected_comb << " but got " << combination(nums);
}

TEST(MathMachine, Permutation) {
  double nums[] = {5.0, 2.0};
  double expected_perm = 20.0;

  ASSERT(std::fabs(permutation(nums) - expected_perm) <= 1e-6)
    << "Permutation test failed: Expected " << expected_perm << " but got " << permutation(nums);
}

TEST(MathMachine, DivisionByZero) {
  double nums[] = {10.0, 0.0};
  try {
    double result = division(nums);
    ASSERT(false) << "Expected exception for division by zero but got " << result;
  } catch (const std::runtime_error &e) {
    // Expected exception
  }
}

TEST(MathMachine, LogarithmOfNegativeNumber) {
  double nums[] = {-5.0};
  try {
    double result = logarithms(nums);
    ASSERT(false) << "Expected exception for logarithm of negative number but got " << result;
  } catch (const std::runtime_error &e) {
    // Expected exception
  }
}

TEST(MathMachine, FactorialOfNegativeNumber) {
  double nums[] = {-3.0};
  try {
    double result = factorial(nums);
    ASSERT(false) << "Expected exception for factorial of negative number but got " << result;
  } catch (const std::runtime_error &e) {
    // Expected exception
  }
}

TEST(MathMachine, InvalidRootCalculation) {
  double nums[] = {-16.0, 2.0};
  try {
    double result = calculating_roots(nums);
    ASSERT(false) << "Expected exception for invalid root calculation but got " << result;
  } catch (const std::runtime_error &e) {
    // Expected exception
  }
}