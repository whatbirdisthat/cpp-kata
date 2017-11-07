#include "BowlingGame.h"

bool BowlingGame::isSpare(int bowlIndex) {
  return bowlIndex > 0 && bowls[bowlIndex-1] + bowls[bowlIndex] == 10;
}

int BowlingGame::score() {
  int theScore = 0;
  for (int i = 0; i < bowls.size(); i++) {
    if (isSpare(i)) {
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
