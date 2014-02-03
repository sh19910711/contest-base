// @snip <sh19910711/contest-base:headers.cpp>
// @snip <sh19910711/contest:utils_prototypes.cpp>
// @snip <sh19910711/contest-base:solution/template-solution.cpp>
// @snip <sh19910711/contest:utils.cpp>
#ifndef __MY_UNIT_TEST__
int main() {
  // desc: http://meme.biology.tohoku.ac.jp/students/iwasaki/cxx/speed.html#id18
  std::ios::sync_with_stdio(false);
  std::cin.tie(0);

  // 
  using namespace solution;
  static InputStorage in;
  static OutputStorage out;
  static Storages storages;
  static Solution solution;
  static Solver solver;
  storages.in = &in;
  storages.out = &out;
  solution.storages = &storages;
  solution.solver = &solver;
  return solution.run();
}
#endif

