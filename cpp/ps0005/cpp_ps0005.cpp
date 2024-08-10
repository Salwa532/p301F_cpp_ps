#include <iostream>
#include <string>
#include <cmath>

int main()
{
      // prompting user for the 2 operands and an operator 2/2
      double num1, num2, result;
      char op;

      std::cout << "Enter the two operands :" << std::endl;
      std::cin >> num1 >> num2;

      std::cout << "Enter the operator + - * / % :" << std::endl;
      std::cin >> op;

      // checking user inputs and processing------------ 3/4
      switch (op)
      {
      case '+':
            result = num1 + num2;
            break;

      case '-':
            result = num1 - num2;
            break;

      case '*':
            result = num1 * num2;
            break;

      case '/':
            if(num1 && !num2) {
                  std::cout << "Math Error: cannot divide by 0." << std::endl;
                  return 2;
            }
            if(!num1 && !num2) {
                  std::cout << "Invalid character/s or zero valueInfinite number of solutions: (0 / 0) is Undefined Quantity!" << std::endl;
                  return 3;
            }
            result = num1 / num2;
            break;

      case '%':
            if(std::int(num1) != num1 || std::int(num2) != num2) {
                  std::cout << "cannot execute modulo operation for floating point numbers." << std::endl;
                  return 4;
            }
            result = static_cast<int>(num1) % static_cast<int>(num2);
            break;
      
      default:
            std::cout << "Invalid character for operator." << std::endl;
            return 1;
      }

      // printing the result if all data is valid 1/1
      std::cout << "(" << num1 << ") " << op << " (" << num2 << ")" << " = " << result << std::endl;


      return 0;
}
// great work 😎 9/10 ⭐
