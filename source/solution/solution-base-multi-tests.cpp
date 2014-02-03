// @snip <sh19910711/contest-base:solution/interface.cpp>
struct SolutionBase: public SolutionInterface {
  virtual ~SolutionBase() {};

  int run() {
    int tests = 0;
    std::cin >> tests;
    this->before_all_actions();
    for ( int i = 0; i < tests; ++ i ) {
      this->before_action(i);
      this->action();
      this->after_action(i);
    }
    this->after_all_actions();
    return 0;
  }

  bool action() {
    if ( ! this->input(this->storages->in) ) {
      return false;
    }
    this->output(solver->solve(this->storages->in, this->storages->out));
    return true;
  }
};
