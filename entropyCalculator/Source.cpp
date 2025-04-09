

#include <iostream>
#include <unordered_map>
#include <cmath>
#include <string>

// double calculateEntropy(const std::string& data) {
  //  std::unordered_map<char, int> frequency;
  //  for (char c : data) {
//
  //  }
//
  //  }
//
 //   return entropy;
// }

int main() {
    std::string text = "example text for entropy calculation";
    double entropy = calculateEntropy(text);
    std::cout << "Entropy: " << entropy << std::endl;
    return 0;
}