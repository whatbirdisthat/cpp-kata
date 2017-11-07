class TestResults {
  int passed;
  int failed;

  public:
  void pass() {
    passed++;
  }
  void fail() {
    failed++;
  }

  int failCount() {
    return failed;
  }
  int passCount() {
    return passed;
  }
};
