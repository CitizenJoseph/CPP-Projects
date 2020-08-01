#include <iostream>
#include <math.h>

void quadratic(int a, int b, int c) {
  double xPos = (-b + sqrt(pow(b, 2) - 4*a*c)) / (2*a);

  double xNeg = (-b - sqrt(pow(b, 2) - 4*a*c)) / (2*a);

  if(isnan(xPos) || isnan(xNeg)) {
    std::cout << "There are no x values for this equation.\n";
  } else {
    std::cout << "The x values of this equation are " << xPos << " and " << xNeg <<
    "\n";
  }
}

int main() {

  int a, b, c;

  std::cout << "Input the constants of the Quadratic Equation:\n";

  std::cin >> a >> b >> c;
  quadratic(a, b, c);

  return 0;
}
