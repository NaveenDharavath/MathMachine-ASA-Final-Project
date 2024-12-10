#include <iostream>
#include <cmath>
#include "mathmachine.h" // Updated the header file include

// Function to perform addition of numbers in the 'nums' list
double addition(double nums[]) {
  return nums[0] + nums[1];
}

// Function to perform subtraction of numbers in the 'nums' list
double subtraction(double nums[]) {
  return nums[0] - nums[1];
}

// Function to perform multiplication of numbers in the 'nums' list
double multiplication(double nums[]) {
  return nums[0] * nums[1];
}

// Function to perform division of numbers in the 'nums' list
double division(double nums[]) {
  return nums[0] / nums[1];
}

// Function to calculate the modulus of numbers in the 'nums' list
double modulus(double nums[]) {
  return fmod(nums[0], nums[1]);
}

// Function to calculate the power of exponents for numbers in the 'nums' list
double powers_exponents(double nums[]) {
  return pow(nums[0], nums[1]);
}

// Function to calculate roots or 1/nth powers of a number in the 'nums' list
double calculating_roots(double nums[]) {
  return pow(nums[0], 1 / nums[1]);
}

// Function to calculate the factorial of a number in the 'nums' list
double factorial(double nums[]) {
  double result = 1;
  for (int fact = 1; fact <= static_cast<int>(nums[0]); ++fact) {
    result *= fact;
  }
  return result;
}

// Function to perform trigonometric operations based on the choice and angle in the 'nums' list
double trignometry(double nums[]) {
  double x = (nums[0] / 180) * 3.14159265359;
  return sin(x);
}

// Function to calculate logarithms based on the choice and operands in the 'nums' list
double logarithms(double nums[]) {
  return log(nums[0]);
}

// Function to calculate the Euclidean distance between two points in the 'nums' list
double eucledian_distance(double nums[]) {
  return sqrt(pow(0 - nums[0], 2) + pow(0 - nums[1], 2));
}
// Function to calculate the area of various shapes and polygons based on the choice and dimensions in \
the 'nums' list
double area(double nums[]) {
  return nums[0] * nums[1];
}

// Additional operations
double hyperbolic_sin(double nums[]) {
  return sinh(nums[0]);
}

double hyperbolic_cos(double nums[]) {
  return cosh(nums[0]);
}

double hyperbolic_tan(double nums[]) {
  return tanh(nums[0]);
}

double logarithm_base(double nums[]) {
  return log(nums[0]) / log(nums[1]);
}

double square_root(double nums[]) {
  return sqrt(nums[0]);
}
double combination(double nums[]) {
  double n = nums[0];
  double r = nums[1];
  return tgamma(n + 1) / (tgamma(r + 1) * tgamma(n - r + 1));
}

double permutation(double nums[]) {
  double n = nums[0];
  double r = nums[1];
  return tgamma(n + 1) / tgamma(n - r + 1);
}

double maximum(double nums[]) {
  return nums[0] > nums[1] ? nums[0] : nums[1];
}

double minimum(double nums[]) {
  return nums[0] < nums[1] ? nums[0] : nums[1];
}

double absolute_value(double nums[]) {
  return fabs(nums[0]);
}

// Function to perform mathmachine operations based on the choice and operands in the 'nums' list
double mathmachine(int choice, double nums[]) { // Renamed 'calculator' to 'mathmachine'
  switch (choice) {
  case 1: return addition(nums);
  case 2: return subtraction(nums);
  case 3: return multiplication(nums);
  case 4: return division(nums);
  case 5: return modulus(nums);
  case 6: return powers_exponents(nums);
  case 7: return calculating_roots(nums);
  case 8: return factorial(nums);
  case 9: return trignometry(nums);
  case 10: return logarithms(nums);
  case 11: return eucledian_distance(nums);
  case 12: return area(nums);
  case 13: return hyperbolic_sin(nums);
  case 14: return hyperbolic_cos(nums);
  case 15: return hyperbolic_tan(nums);
  case 16: return logarithm_base(nums);
  case 17: return square_root(nums);
  case 18: return combination(nums); 
  case 19: return permutation(nums);
  case 20: return maximum(nums);
  case 21: return minimum(nums);
  case 22: return absolute_value(nums);
  default: return 0.0; // Return a default value or handle error as needed
  }
}