#include "bowling.cpp"
#include "assert.hpp"

void CanReportZeroGameOnInit() {
  BowlingGame& b = (*(new BowlingGame()));
  int actualScore = b.score();
  assert::Equal("Can Report Zero Game on Init", 1, actualScore);
}

int main(int argc, char** argv) {
  CanReportZeroGameOnInit();
}

