#include <iostream>
#include "process.h"

int main()
{
  std::cout << "Main function started." << std::endl;
  Process pro;
  pro.planProcess();
  std::cout << "Main function ended." << std::endl;
  return 0;
}