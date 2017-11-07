#include "BowlingGame.h"

int BowlingGame::score() {
  int theScore = 0;
  for (int i = 0; i < bowls.size(); i++) {
    if (i > 0 && (bowls[i] + bowls[i-1] == 10)) {
      theScore += bowls[i] + bowls[i+1];
    } else {
      theScore += bowls[i];
    }
  }
  return theScore;
}

void BowlingGame::bowl(int pins) {
  bowls.push_back(pins);
}
