#include "BowlingGame.h"
#include "assert.hpp"
#include <vector>

void bowlMany(BowlingGame& b, int bowls, int pins) {
  for (int i = 0; i < bowls; i++) {
    b.bowl(pins);
  }
}

void CanReportZeroGameOnInit(BowlingGame& b) {
  int actualScore = b.score();
  assert::Equal("Can Report Zero Game on Init", 0, actualScore);
}

void CanReportZeroPinGame(BowlingGame& b) {
  b.bowl(1);
  bowlMany(b, 19, 0);
  assert::Equal("Can report a single pin game", 1, b.score());
}

void CanReportAGameOfZeroes(BowlingGame& b) {
  bowlMany(b, 20, 0);
  assert::Equal("Can report a game of zeroes = 0", 0, b.score());
}

void CanReportAGameOfOnes(BowlingGame& b) {
  bowlMany(b, 20, 1);
  assert::Equal("Can report a game of ones = 20", 20, b.score());
}

void CanReportASpare(BowlingGame& b) {
  b.bowl(6);
  b.bowl(4);
  b.bowl(4);
  bowlMany(b, 17, 0);
  assert::Equal("Can report a spare game 6,4,4 = 18", 18, b.score());
}

void CanReportASpareWithOverlap(BowlingGame& b) {
  b.bowl(6);
  b.bowl(4);
  b.bowl(6);
  bowlMany(b, 17, 0);
  assert::Equal("Can report a spare game 6,4,6 = 22", 22, b.score());
}

int main(int argc, char** argv) {
  std::vector<void(*)(BowlingGame&)> tests;
  tests.push_back(CanReportZeroGameOnInit);
  tests.push_back(CanReportZeroPinGame);
  tests.push_back(CanReportAGameOfOnes);
  tests.push_back(CanReportAGameOfZeroes);
  tests.push_back(CanReportASpare);
  tests.push_back(CanReportASpareWithOverlap);

  for (int t = 0; t < tests.size(); t++) {
    BowlingGame& b = (*(new BowlingGame()));
    tests[t](b);
    delete &b;
  }
}

