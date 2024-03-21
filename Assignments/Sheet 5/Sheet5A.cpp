#include <iostream>
using namespace std;

class GCD {
  int A[30];
  int B[30];
  int G[30];
  int n;

public:
  int GCDCal(int a, int b) {
    if (b == 0) {
      return a;
    }
    return GCDCal(b, a % b);
  }

  void read() {
    cout << "Enter Number of elements you want (maximum of 30): ";
    cin >> n;
    for (int i = 0; i < n; i++) {
      cout << "Enter Value for A[" << i + 1 << "]: ";
      cin >> A[i];
      cout << "Enter Value for B[" << i + 1 << "]: ";
      cin >> B[i];

      G[i] = GCDCal(A[i], B[i]);
    }
  }

  void display() {
    for (int i = 0; i < n; i++) {
      cout << "Value for A[" << i + 1 << "]: " << A[i];
      cout << " and value for B[" << i + 1 << "]: " << B[i];
      cout << " and value for G[" << i + 1 << "]: " << G[i] << endl;
    }
  }

  friend float avg(GCD E) {
    for (int i = 0; i < E.n; i++) {
      if (E.A[i] > 2) {

      }

    }

  }
};
int main() {

  return 0;
}