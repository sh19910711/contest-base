struct SolutionBase: SolutionInterface {
  int queries;
  virtual ~SolutionBase() {};
  virtual bool input_query( InputStorage* in ) { return false; }
  virtual bool action() {
    if ( ! this->input(this->storages->in) )
      return false;
    for ( int i = 0; i < queries; ++ i ) {
      this->input_query(this->storages->in);
      this->output(this->solver->solve(this->storages->in, this->storages->out));
    }
    return true;
  }
  virtual int run() {
    this->before_all_actions();
    for (;;) {
      this->before_action(-1);
      if ( ! this->action() ) { this->after_action(-1); break; }
      this->after_action(-1);
    };
    this->after_all_actions();
    return 0;
  }
};
