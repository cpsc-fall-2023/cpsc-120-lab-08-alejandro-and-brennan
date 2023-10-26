// Alejandro Torres
// alejandrot67@csu.fullerton.edu
// @alejandrxii
// Partners: @brennawong

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  int total_num{static_cast<int>(arguments.size() - 1)};

  if (arguments.size() == 1) {
    std::cout << "error: you must supply at least one number" << std::endl;
    return 1;
  }

  double sum{0.0};
  for (std::string arg : arguments) {
    if (arg == arguments[0]) {
      arg = "0";
      continue;
    }
    sum += std::stod(arg);
  }
  double average{0.0};
  average = sum / total_num;
  std::cout << "average = " << average << std::endl;

  return 0;
}
