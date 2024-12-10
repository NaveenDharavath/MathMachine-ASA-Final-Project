#include <iostream>
#include "mathmachine.h" // Updated the header file include

int main() {
  int choice;
  double nums[2] = {0, 0}; // Initialize nums with default values

  std::cout << "Enter operation choice:\n"
            << "1. Addition\n"
            << "2. Subtraction\n"
            << "3. Multiplication\n"
            << "4. Division\n"
            << "5. Modulus\n"
            << "6. Powers/Exponents\n"
            << "7. Calculating Roots\n"
            << "8. Factorial (Single Operand)\n"
            << "9. Trigonometry (Single Operand)\n"
            << "10. Logarithms (Single Operand)\n"
            << "11. Euclidean Distance\n"
            << "12. Area\n"
            << "13. Hyperbolic Sine (Single Operand)\n"
            << "14. Hyperbolic Cosine (Single Operand)\n"
            << "15. Hyperbolic Tangent (Single Operand)\n"
            << "16. Logarithm (Custom Base)\n"
            << "17. Square Root (Single Operand)\n"
            << "18. Combination (nCr)\n"
            << "19. Permutation (nPr)\n"
            << "20. Maximum\n"
            << "21. Minimum\n"
            << "22. Absolute Value (Single Operand)\n";

  std::cin >> choice;

  // Handle input based on the number of operands required
  if (choice >= 1 && choice <= 22) {
    if (choice == 8 || choice == 9 || choice == 10 || choice == 13 || choice == 14 || choice == 15 ||
        choice == 17 || choice == 22) {
      // Single operand operations
      std::cout << "Enter operand:\n";
      std::cin >> nums[0];
    } else {
      // Double operand operations
      std::cout << "Enter two operands:\n";
      std::cin >> nums[0] >> nums[1];
    }

    double result = mathmachine(choice, nums); // Updated to use 'mathmachine'

    std::cout << "Result: " << result << std::endl;
  } else {
    std::cerr << "Invalid choice. Please choose a valid number." << std::endl;
  }

  return 0;
}