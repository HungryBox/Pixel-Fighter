#include "iostream"

int multiply(double a, double b)
{
  double r;
  r = a * b;
  return r;
}

int main()
{
  std::cout << "Hello World!\n";
  std::cout << "Why is compiling this so difficult?!\n";
  std::cout << "I can multiply!\n";
  std::cout << "2 * 3 = " << multiply(2,3) << "\n";
  return 0;
}

