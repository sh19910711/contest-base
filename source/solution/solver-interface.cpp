struct SolverInterface {
  virtual ~SolverInterface() {}
  virtual const Output* solve( const Input* in, Output* out ) = 0;
};
