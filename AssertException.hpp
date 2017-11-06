#include <exception>

using namespace std;

class AssertException: public exception {
  public:
    const char* message;
    AssertException(const char* msg) {
      message = msg;
    }
    const char* what() {
      return message;
    }
};

