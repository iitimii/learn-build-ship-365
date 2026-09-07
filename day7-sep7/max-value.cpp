#include <vector>

float maxValue(std::vector<float> numbers) {
  // todo
  float max = numbers[0];
  for (float x : numbers){
    if (max < x) max = x;
  }
  return max;
}


void run() {
  // this method behaves as `main()`, do not remove it
}