#include <iostream>
#include "process.h"

void Process::planProcess()
{
  std::cout << "Planning process started." << std::endl;
  pnc_map_.maopInfo();
  std::cout << "planning success!" << std::endl;
}