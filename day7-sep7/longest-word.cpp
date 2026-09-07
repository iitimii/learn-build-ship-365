#include <string>
#include <sstream>

std::string longestWord(std::string sentence) {
  std::istringstream stream(sentence);
  std::string max {""};
  std::string word;
  while (stream >> word){
    if (max.length() <= word.length()){
      max = word;
    }
  }
  return max;
}

void run() {
  // this function behaves as `main()` for the 'run' command
  // you may sandbox in this function, but should not remove it
}