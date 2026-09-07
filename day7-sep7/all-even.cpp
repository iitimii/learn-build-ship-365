#include <vector>

bool allEven(std::vector<int> nums) {
  for (int x : nums){
    if (x % 2 != 0){
      return false;
    }
  }
  return true;
}


void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}