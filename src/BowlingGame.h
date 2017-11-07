#include <vector>


class BowlingGame {
  std::vector<int> bowls;
  bool isSpare(int bowlIndex);
  bool isStrike(int bowlIndex);
  public:
  void bowl(int pins);
  int score();
};


