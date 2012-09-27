#include "TimingTests.h"
#include <iostream>
#include <ctime>

bool TimingTests::clockStart() {
  while(codeStart = false) {
    return false;
  }
  if(start <= 0 && codeStart == true) {
    start = clock();
    return true;
  }
  else {
    return true;
  }
}

bool TimingTests::clockStop() {
  if(codeStart = false) {
    return false;
  }
  else if(codeStop = true) {
    stop = clock();
    return true;
  }
  else {
    return false;
  }
}
 
void TimingTests::printTime(int start, int end) { 
  elapsed = end - start;
  seconds = (double) elapsed/CLOCKS_PER_SEC;
  std::cout << "elapsed time: " << seconds << " seconds " <<std::endl;
  }
