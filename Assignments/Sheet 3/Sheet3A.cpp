#include <iostream>
#include <cmath>
using namespace std;

class Data {
private:
  float X[30];
  int h, n;
  char T[30];

public:
  Data(){
    cout << "h: "; cin >> h; cout << "n: "; cin >> n; 
    for (int i = 0; i < n; i++) {
      cout << "1. X[i] = "; cin >> X[i]; cout << " T[i] = "; cin >> T[i];
    }
  }

  void set() {
    for (int i = 0; i < n; i++) {
      int temp = X[i];
      if (temp % h == 0) {
        T[i] = 'Y';
        break;
      }
      T[i] = 'N';
    }
  }

  float avg() {
    int sum = 0;
    for (int i = 0; i < n; i++) {
      if (T[i] == 'Y') {
        sum += X[i];
      }
    }
    return sum / n;
  }

  void display() {
    cout << "h: " << h << "n: " << n << endl;
    for (int i = 0; i < n; i++) {
      cout << "1. X[i] = " << X[i] << " T[i] = " << T[i];
    }
  }

  void compare(Data y) {
    int limit = 0;
    int xSum = 0, xAvg = 0;
    int ySum = 0, yAvg = 0;
    if (n > y.n)
      limit = y.n;
    if (n < y.n)
      limit = y.n;
    if (n = y.n)
      limit = y.n;
    for (int i = 0; i < limit; i++)
    {
      if (T[i] == 'Y') {
        xSum += X[i];
      }
      if (y.T[i] == 'Y') {
        ySum += y.X[i];
      }
      xAvg = xSum / limit;
      yAvg = yAvg / limit;
    }
    if (xAvg > yAvg)
      cout << "Object 1 is bigger.";
    if (xAvg < yAvg)
      cout << "Object 2 is bigger.";
    if (xAvg == yAvg)
      cout << "Objects are equal. ";
  }
};

int main() {
  Data d1, d2;

  d1.set();
  d2.set();
  d1.display();
  d2.display();
  d1.compare(d2);

  return 0;
}