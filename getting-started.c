#include <stdlib.h>
#include <stdio.h>

int main(int argc, [[maybe_unused]] char* argv[argc+1]) {
  //declarations
  double A[5] = {
    [0] = 9.0,
    [1] = 2.9,
    [4] = 3E+25,
    [3] = .00007,
  };

  //doing work
  for (size_t i=0; i < 5; ++i) {
    printf("element %zu is %g, \tits square is %g\n",
      i,
      A[i],
      A[i]*A[i]);
  } 

  return EXIT_SUCCESS;

}
