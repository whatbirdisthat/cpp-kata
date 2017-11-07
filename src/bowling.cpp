#include "BowlingGame.h"

int BowlingGame::score() {
  int theScore = 0;
  for (int b = 0; b < bowls.size(); b++) {
    theScore += bowls[b];
  }
  return theScore;
}

void BowlingGame::bowl(int pins) {
  bowls.push_back(pins);
}
