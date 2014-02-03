// @snip <sh19910711/contest-base:solution/solution-interface.cpp>
struct SolutionBase: SolutionInterface {
  virtual ~SolutionBase() {};

  int run() {
    this->before_all_actions();
    for (;;) {
      this->before_action(-1);
      if ( ! this->action() ) { this->after_action(-1); break; }
      this->after_action(-1);
    };
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
