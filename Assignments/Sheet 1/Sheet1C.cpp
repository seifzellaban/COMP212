#include <iostream>
#include <cmath>
using namespace std;

void getArray(int array[], int size) {
  cout << "Enter numbers (integers) for the array: ";
  for (int i = 0; i < size; i++) {
    cin >> array[i];
  }
}

bool isPrime(int num) {
  if (num <= 1)
    return false;
  if (num <= 3)
    return true;
  for (int i = 2; i <= sqrt(num); ++i) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

bool isEven(int num) {
  if ((num % 2) == 0)
    return true;
  else
    return false;
}

float average(int array[], int n) {
  int count = 0, sum = 0;
  float avg;
  for (int i = 0; i < n; i++) {
    if (isPrime(array[i])) {
      sum += array[i];
      count++;
    }
  }
  if (count == 0) {
    return 0;
  }
  avg = (float)sum / count; 
  return avg;
}

float average(int array[], int n, char c) { 
  int count = 0, sum = 0;
  float avg;
  if (c == 'E' || c == 'e') {
    for (int i = 0; i < n; i++) {
      if (isEven(array[i])) {
        sum += array[i];
        count++;
      }
    }
  } else if (c == 'O' || c == 'o') {
    for (int i = 0; i < n; i++) {
      if (!isEven(array[i])) {
        sum += array[i];
        count++;
      }
    }
  }
  if (count == 0) 
    return 0;
  avg = (float)sum / count;
  return avg;
}

int main()
{
  int list[10];
  char c;
  getArray(list, 10);
  cout << "Average of prime numbers in list = " << average(list, 10) << endl;
  cout << "Enter 'E' or 'e' for even average, 'O' of 'o' for odd average: ";
  cin >> c;

  if (c == 'E' || c == 'e') {
      cout << "Average of even numbers in list = " << average(list, 10, c) << endl;
    }
    if (c == 'O' || c == 'o') {
      cout << "Average of odd numbers in list = " << average(list, 10, c) << endl;
    }

  return 0;
}