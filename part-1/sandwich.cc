// Alejandro Torres
// alejandrot67@csu.fullerton.edu
// @alejandrxii
// Partners: @brennawong

#include <iostream>
#include <string>
#include <vector>

int main(int argc, char* argv[]) {
  std::vector<std::string> arguments{argv, argv + argc};
  if (arguments.size() != 4) {
    std::cout << "Error: Invalid number of arguments." << std::endl;
    return 1;
  }
  std::string protein = arguments.at(1);
  std::string bread = arguments.at(2);
  std::string condiment = arguments.at(3);
  std::cout << "Your order: A " << protein << " sandwich on " << bread
            << " with " << condiment << "." << std::endl;
  return 0;
}