#include "BowlingGame.h"

bool BowlingGame::isSpare(int bowlIndex) {
  return bowls[bowlIndex+1] + bowls[bowlIndex] == 10;
}

bool BowlingGame::isStrike(int bowlIndex) {
  return bowls[bowlIndex] == 10;
}

int BowlingGame::score() {
  if (bowls.size() < 1) {
    return 0;
  }
  int theScore = 0;
  int i = 0;
  for (int b = 0; b < 10; b++) {
    if (isStrike(i)) {
      theScore += 10 + bowls[i+1] + bowls[i+2];
      i++;
    } else if (isSpare(i)) {
      theScore += 10 + bowls[i+2];
      i+=2;
    } else {
      theScore += bowls[i];
      theScore += bowls[i+1];
      i+=2;
    }
  }
  return theScore;
}

void BowlingGame::bowl(int pins) {
  bowls.push_back(pins);
}
