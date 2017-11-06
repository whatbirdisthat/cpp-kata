#include "AssertException.hpp"
#include <iostream>
using namespace std;

class assert {
  public:
    static void Equal(const char* testName, int expected, int actual){
      if (expected != actual) {
        std::cout << "x - " << testName << " (expected " << expected << ", actual " << actual << ") " << std::endl;
//        throw AssertException("FAIL");
      }
    }
};
