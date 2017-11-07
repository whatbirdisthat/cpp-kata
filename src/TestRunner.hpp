#include <vector>
#include <iostream>
#include <chrono>
#include <exception>
#include "BowlingGame.h"
#include "TestResults.hpp"

using namespace std;
using namespace std::chrono;

class TestRunner {
  public:
    static void RunTests(const char* title, std::vector<void(*)(BowlingGame&)>& tests) {
      TestResults& testResults = (*(new TestResults()));
      cout << title << endl << endl;
      auto startTime = steady_clock::now();

      for (int t = 0; t < tests.size(); t++) {
        BowlingGame& b = (*(new BowlingGame()));
        tests[t](b);
        delete &b;
      }

      auto duration = steady_clock::now() - startTime;
      cout << endl << "Duration: " << duration_cast<milliseconds>(duration).count() << "ms" << endl;
    }
};
