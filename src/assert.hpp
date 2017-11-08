#include <iostream>
#include <sstream>
#include <exception>

using namespace std;

class assert {

  public:
    static void Equal(const char* testName, int expected, int actual){
      const char* failMark = "\033[31m✗\033[0m";
      const char* passMark = "\033[32m✓\033[0m";
      if (expected != actual) {
        cout << failMark << " - " << testName << " (expected " << expected << ", actual " << actual << ") " << std::endl;
      } else {
        std::cout << passMark << " - " << testName << std::endl;
      }
    }
};
