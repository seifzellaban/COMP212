#include <iostream>
#include <cmath>
using std::cout, std::cin, std::endl, std::string;

class Data {
  float P[2][2];

public:
  Data() {
    int init = 0;

    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        P[i][j] = 0;
      }

    }
  }

  Data(float M[2][2]) {
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        P[i][j] = M[i][j];
      }

    }
  }

  Data(Data& obj) {
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        P[i][j] = obj.P[i][j];
      }

    }
  }

  float Sum() {
    return sqrt(pow((P[0][0] - P[1][0]), 2) + pow((P[0][1] - P[1][1]), 2));
  }

  void Display() {
    for (int i = 0; i < 2; i++)
    {
      for (int j = 0; j < 2; j++)
      {
        cout << "P[" << i << "][" << j << "] = " << P[i][j] << endl;
      }

    }
  }
};

int main() {
  Data A;
  A.Display();
  // system("pause");
  return 0;
}