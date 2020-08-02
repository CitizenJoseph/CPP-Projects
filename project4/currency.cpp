#include <iostream>
#include "converter.hpp"

int main() {
  int natNum;

  std::cout << "Currency Converter\n" << "Enter the number for which Currency you want to convert from into USD:\n"
  << "1. Colombia\n" << "2. Brazil\n" << "3. Peru\n\n";

  std::cin >> natNum;

  switch (natNum) {
    double money;

    case 1:
      std::cout << "Enter number of Colombian Pesos: ";
      std::cin >> money;
      std::cout << "US Dollars = $ " << conCom(money) << "\n";
      break;
    case 2:
      std::cout << "Enter number of Brazilian Reales: ";
      std::cin >> money;
      std::cout << "US Dollars = $ " << conBra(money) << "\n";
      break;
    case 3:
      std::cout << "Enter number of Peruvian Soles: ";
      std::cin >> money;
      std::cout << "US Dollars = $ " << conPer(money) << "\n";
      break;
  }
}
