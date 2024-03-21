#include <iostream>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

class EQ {
  float a, b, c;
public:
  EQ(float x = 0, float y = 0, float z = 0) {
    a = x;
    b = y;
    c = z;
  }
  
  EQ Solve() {
    float det = pow(b, 2) - 4 * a * c;
    if (det > 0) {
      
    }
  }
};

void main() {

  system("pause");
}