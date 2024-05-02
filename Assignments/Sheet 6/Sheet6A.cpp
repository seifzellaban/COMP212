#include <iostream>
#include <iomanip>
using namespace std;

class Data {
private:
  int D[30];
  double F[30];
  int n;
public:
  void read() {
    cout << "Enter number of elements you want (max 30): ";
    cin >> n;
    for (int i = 0; i < n;i++) {
      cout << "Enter D[" << i + 1 << "]: ";
      cin >> D[i];
    }
  }
  int factorial(int num) {
    int fact = 1;
    for (int i = num; i >= 1; i--) {
      fact *= i;
    }
    return fact;
  }
  double aCb(int a, int b) {
    return (factorial(a) / (factorial(b) * factorial(a - b)));
  }
  double sumF() {
    double sum = 0;
    for (int i = n; i >= 1; i--) {
      sum += i;
    }
    return sum;
  }
  void display() {
    cout << setw(3) << "D[]: " << setw(3) << "F[]: " << endl;
    for (int i = 0; i < n;i++) {
      cout << setw(3) << D[i] << setw(3) << F[i] << endl;
    }
  }
  Data operator -(Data X) {
    Data temp;
    for (int i = 0; i = n;i++) {
      temp.D[i] = this->D[i];
      temp.D[i] -= X.D[i];
    }
    return temp;
  }
  Data operator *(int C) {
    Data temp;
    for (int i = 0; i = n;i++) {
      temp.D[i] = this->D[i];
      temp.F[i] = temp.D[i] * C;
    }
    return temp;
  }
  bool operator <(Data X) {
    for (int i = 0; i < n; i++) {
      if (this->D[i] >= X.D[i]) {
        return false;
      }
    }
    return true;
  }
  bool operator !=(Data X) {
    if (sumF() == X.sumF()) {
      return false;
    }
    return true;
  }
};

int main() {
  Data A, B;
  A.read();
  B.read();
  // if (A < B)
  // cout << "true\n";
  // else
  // cout << "false\n";
  // return 0;
  A.display();
  B.display();
}