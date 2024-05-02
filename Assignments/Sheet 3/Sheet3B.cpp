#include <iostream>
#include <cmath>
using std::cout, std::cin, std::string;

struct Point {
  float x, y, z;

  float Norm() const {
        return sqrt(x * x + y * y + z * z);
    }
};

class Point_3D {
  Point P[30];
  float N[30];
  int m;

public:
  Point_3D() {
    cout << "n: "; cin >> m;;
    for (int i = 0; i < m; i++) {
      float x = 0, y = 0, z = 0;
      cout << "1. X = "; cin >> x;
      cout << "1. Y = "; cin >> y;
      cout << "1. Z = "; cin >> z; // cout << " N[i] = "; cin >> N[i];
      P[i] = { x, y, z };
    }
  }

  void Norm() {
    for (int i = 0; i < m; i++) {
      N[i] = P[i].Norm();
    }
  }
};

void main() {

  system("pause");
}