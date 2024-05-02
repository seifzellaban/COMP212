#include <iostream>
#include <cmath>
using namespace std;

class Ser2;
class Ser1 {
  float SX[30];
  float X[30];
  int n;

public:
  Ser1() {
    cout << "Enter Number of elements you want (maximum of 30): ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cout << "Enter X[" << i + 1 << "]: ";
      cin >> X[i];

      for (int j = 0; j < i; j++)
      {
        SX[i] = (j + i) / (pow(X[j], 2) + i);
      }
    }
  }

  float max() {
    for (int i = 0; i < n; i++)
    {
      if (n <= 0)
        return -1;

      int max_value = SX[0];
      for (int i = 1; i < n; i++) {
        if (SX[i] > max_value) {
          max_value = SX[i];
        }
      }
      return max_value;
    }
  }

  void display() {
    for (int i = 0; i < n; i++) {
      cout << "Value for SX[" << i + 1 << "]: " << SX[i];
      cout << " and value for X[" << i + 1 << "]: " << X[i] << endl;
    }
  }
  
  friend float compareMax(Ser1 X, Ser2 Y);
};

class Ser2 {
  float SY[30];
  float Y[30];
  int n;

public:
  Ser2() {
    cout << "Enter Number of elements you want (maximum of 30): ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
      cout << "Enter Y[" << i + 1 << "]: ";
      cin >> Y[i];

      for (int j = 0; j < i; j++)
      {
        SY[i] = (j + i) / (pow(Y[j], 3) + i);
      }
    }
  }

  float max() {
    for (int i = 0; i < n; i++)
    {
      if (n <= 0)
        return -1;

      int max_value = SY[0];
      for (int i = 1; i < n; i++) {
        if (SY[i] > max_value) {
          max_value = SY[i];
        }
      }
      return max_value;
    }
  }

  void display() {
    for (int i = 0; i < n; i++) {
      cout << "Value for Sy[" << i + 1 << "]: " << SY[i];
      cout << " and value for X[" << i + 1 << "]: " << Y[i] << endl;
    }
  }
  
  friend float compareMax(Ser1 X, Ser2 Y);
};

float compareMax(Ser1 X, Ser2 Y) {
  if (X.max() > Y.max())
    cout << "Ser1 max is greater." << endl;
  
  if (X.max() < Y.max())
    cout << "Ser2 max is greater." << endl;

  if (X.max() == Y.max())
    cout << "Ser1 is equal to Ser2." << endl;
}

int main() {

  return 0;
}