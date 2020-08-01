#include <iostream>

double humanYears(double age) {
  if(age <= 2 && age > 0) {
    return age * 10.5;
  } else {
    double humanYears = 21;
    return (age - 2) * 4 + humanYears;
  }


}

int main() {
  double dogAge;

  std::cout << "How old is your dog?\n";
  std::cin >> dogAge;

  std::cout << "Your dog is " << humanYears(dogAge) << " years old\n";

  return 0;
}
