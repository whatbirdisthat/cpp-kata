#include <vector>
#include "BowlingGame.h"

class TestRunner {
	public:
		static    void RunTests(std::vector<void(*)(BowlingGame&)>& tests) {
			for (int t = 0; t < tests.size(); t++) {
				BowlingGame& b = (*(new BowlingGame()));
				tests[t](b);
				delete &b;
			}
		}
};
