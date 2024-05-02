#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Base {
protected:
  int A[30];
  int a, b, n;
public:
  void read() {
    cout << "Enter a: ";
    cin >> a;
    cout << "Enter b: ";
    cin >> b;
    cout << "Enter n (max 30): ";
    cin >> n;

    for (int i = 0; i < n; i++) {
      cout << "Enter value for A[" << i + 1 << "]: ";
      cin >> A[i];
    }
  }
  void display() {
    cout << a << endl << b << endl;
    for (int i = 0; i < n; i++) {
      cout << "Value of A[" << i + 1 << "]: " << A[i] << endl;
    }
  }
  int max() {
    int max = 0;
    for (int num : A) {
      if (num > max)
        max = num;
    }
    return max;
  }
};

class Drive1 : virtual public Base {
protected:
  long B[30];
public:
  void set() {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < A[i]; j++)
      {
        if (A[i] % a == 0)
          B[i] = pow(j, 2);

        if (!(A[i] % a == 0) && A[i] != 0)
          B[i] = pow(j, 3);
      }
    }
  }
  long max() {
    long max = 0;
    for (long num : B) {
      if (num > max)
        max = num;
    }
    return max;
  }
};

class Drive2 : virtual public Base {
protected:
  long C[30];
public:
  void set() {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < A[i]; j++)
      {
        if (A[i] % b == 0)
          C[i] = pow(j, 2);

        if (!(A[i] % b == 0) && A[i] != 0)
          C[i] = pow(j, 3);
      }
    }
  }
  long max() {
    long max = 0;
    for (long num : C) {
      if (num > max)
        max = num;
    }
    return max;
  }
  long factorial() {
    long num = this->max();
    long fact = 1;
    for (int i = num; i > 0; i++)
    {
      fact *= i;
    }
    return fact;
  }
};

class Drive : public Drive1, public Drive2 {
private:
  long D[3];
public:
  void set() {
    Base::read();
    Drive1::set();
    Drive2::set();

    D[0] = Base::max();
    D[1] = Drive1::max();
    D[2] = Drive2::max();
  }
  long sum() {
    long res = 0;
    for (long num : D)
      res += num;
    return res;
  }
  long factorial() {
    long num = this->sum();
    long fact = 1;
    for (int i = num; i > 0; i++)
    {
      fact *= i;
    }
    return fact;
  }
};
void main()
{
 Drive d;
 Drive1 d1;
 Drive2 d2;

 Base *b1,*b2,*b3;
b1=&d;
b2=&d1;
b3=&d2;
b1->display();

}