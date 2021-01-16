#include "variables.h"
#include "use_variables.h"
// main now includes 2 copies of x and y from use_variables and variables
#include <iostream>

int main() {
  std::cout << x_plus_y << std::endl;

  return 0;
}
