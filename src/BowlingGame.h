#include <vector>


class BowlingGame {
  std::vector<int> bowls;
  bool isSpare(int bowlIndex);
  public:
  void bowl(int pins);
  int score();
};


