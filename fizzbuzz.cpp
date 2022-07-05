#include <iostream>

int main(int argc, char* argv[]) {
  int rng_start;
  int rng_end;
  std::cout << "Enter the start and end of the range: ";
  std::cin >> rng_start >> rng_end;
  if (rng_start >= rng_end) {
    std::cout << "The start must be less than the end." << std::endl;
    return 1;
  }

  for (int i = rng_start; i <= rng_end; i++) {
    if (i % 15 == 0) {
      std::cout << "FizzBuzz" << std::endl;
    } else if (i % 3 == 0) {
      std::cout << "Fizz" << std::endl;
    } else if (i % 5 == 0) {
      std::cout << "Buzz" << std::endl;
    } else {
      std::cout << i << std::endl;
    }
  }

  return 0;
}
