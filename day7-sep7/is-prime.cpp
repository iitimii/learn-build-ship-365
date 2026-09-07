#include <math.h>

bool isPrime(int n) {
  if (n < 2) return false;

  for (int x{2}; x <= sqrt(n); ++x){
    if (n%x == 0) return false;
  }
  return true;
}



void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}