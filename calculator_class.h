#include <iostream>
using namespace std;

class Calculator
{
 public:
  double addition(double x, double y)
  {
    return x + y;
  }

  double subtraction(double x, double y)
  {
    return x - y;
  }

  double multiplication(double x, double y)
  {
    return x * y;
  }

  double division(double x, double y)
  {
    if(y == 0)
    {
        cout << "Error: Division by zero is not possible!" << endl;
    }
    return x / y;
  }
};