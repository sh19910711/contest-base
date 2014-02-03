struct SolutionInterface {
  virtual ~SolutionInterface() {};
  virtual int run()                             = 0;
  virtual bool action()                         = 0;
  virtual bool input( InputStorage* s )         = 0;
  virtual void output( const OutputStorage* s ) = 0;
  virtual void before_all_actions() {}
  virtual void after_all_actions() {}
  virtual void before_action( const int& test_no ) {}
  virtual void after_action( const int& test_no ) {}
  SolverInterface* solver;
  Storages* storages;
};
