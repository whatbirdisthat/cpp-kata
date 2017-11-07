#include "BowlingGame.h"
#include "assert.hpp"
#include <vector>


void CanReportZeroGameOnInit(BowlingGame& b) {
  int actualScore = b.score();
  assert::Equal("Can Report Zero Game on Init", 0, actualScore);
}

void CanReportZeroPinGame(BowlingGame& b) {
  b.bowl(1);
  assert::Equal("Can report a single pin game", 1, b.score());
}

void CanReportAGameOfZeroes(BowlingGame& b) {
  for (int i = 0; i < 20; i++) {
  b.bowl(0);
  }
  assert::Equal("Can report a game of zeroes = 0", 0, b.score());
}

void CanReportAGameOfOnes(BowlingGame& b) {
  for (int i = 0; i < 20; i++) {
  b.bowl(1);
  }
  assert::Equal("Can report a game of ones = 20", 20, b.score());
}

void CanReportASpare(BowlingGame& b) {
  b.bowl(6);
  b.bowl(4);
  b.bowl(4);
  assert::Equal("Can report a spare game 6,4,4 = 18", 18, b.score());
}

int main(int argc, char** argv) {
  std::vector<void(*)(BowlingGame&)> tests;
  tests.push_back(CanReportZeroGameOnInit);
  tests.push_back(CanReportZeroPinGame);
  tests.push_back(CanReportAGameOfOnes);
  tests.push_back(CanReportAGameOfZeroes);
  tests.push_back(CanReportASpare);



  for (int t = 0; t < tests.size(); t++) {
    BowlingGame& b = (*(new BowlingGame()));
    tests[t](b);
    delete &b;
  }
}

