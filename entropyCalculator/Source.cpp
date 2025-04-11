

#include <iostream>
#include <unordered_map>
#include <cmath>
#include <string>

// double calculateEntropy(W) {
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

    std::cout << "=== Boltzmann Entropy Calculator ===\n";

    while (true) {
        double W;
        std::cout << "\nEnter the number of microstates (W), or 0 to exit: ";
        std::cin >> W;

        if (W == 0) {
            std::cout << "Exiting program.\n";
            break;
        }

        double entropy = calculateEntropy(W);

        if (!std::isnan(entropy)) {
            std::cout << "Boltzmann Entropy S = " << entropy << " J/K\n";
        }
    } 
    return 0; 
}