class SolverInterface {
public:
  virtual const OutputStorage* solve( const InputStorage* in, OutputStorage* out ) = 0;
};
