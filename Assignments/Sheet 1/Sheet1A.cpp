#include <iostream>
#include <cmath>
using namespace std;

// First Part
int revert (int num) {
  int reversedNum = 0;
  while (num != 0) {
    int remainder = num % 10;
    reversedNum = reversedNum * 10 + remainder;
    num /= 10;
  }
  return reversedNum;
}

// Second Part
int countDigits (int num) {
  int count = 0;
  while (num != 0) {
      num /= 10;
      count++;
  }
  return count;
}

// Third Part
float exponent (float num, float exp) {
  int result = int(pow(num, exp));
  return result;
}

int main () {
  int num1, num2;
  
  cout << "Enter 2 numbers: ";
  cin >> num1 >> num2;

  cout << "The 2 numbers are 24626, 3." << endl << "Reverse:" << revert(num1) << ", " << revert(num2) << "." << endl << "Count: " << countDigits(num1) << ", " << countDigits(num2) << "." << endl << "Multiply: " << exponent(float(num1), float(num2)) << "." << endl;

  return 0;
}