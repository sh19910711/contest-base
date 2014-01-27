struct SolverInterface {
  virtual void ~SolverInterface() {}
  virtual const OutputStorage* solve( const InputStorage* in, OutputStorage* out ) = 0;
};
