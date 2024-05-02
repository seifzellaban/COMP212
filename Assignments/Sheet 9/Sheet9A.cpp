#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// Class Data: Represents a matrix and provides various operations on it
class Data {
protected:
  float D[30][30]; // Matrix of dimension 30x30
  int n; // Dimension of the matrix D

public:
  Data() {
    readData();
  }
  // Function: readData
  // Reads matrix elements excluding the last row from the user
  void readData() {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n - 1; j++)
      {
        cout << "Enter value for D[" << i + 1 << "][" << j + 1 << "]: ";
        cin >> D[i][j];
      }
    }
  };

  // Function: isPrime
  // Checks if a given number is prime
  bool isPrime(float num) {
    if (num < 2)
      return false;

    for (int i = 2; i <= sqrt(num); i++)
    {
      if ((int)num % i == 0)
      {
        return false;
      }
    }
    return true;
  };

  // Function: maxPrimeInColumn
  // Finds the maximum prime number in a specific column of the matrix
  float maxPrimeInColumn(int col) {
    vector<float> primesInCol;
    for (int i = 0; i < n; i++)
    {
      if (this->isPrime(D[i][col])) {
        primesInCol.push_back(D[i][col]);
      }
    }
    float maxPrime = 0;
    for (float prime : primesInCol) {
      if (prime > maxPrime)
        maxPrime = prime;
    }
    return maxPrime;
  };

  // Function: setLastRow
  // Sets elements of the last row to be the maximum prime numbers in their respective columns
  void setLastRow() {
    for (int i = 0; i < n; i++) {
      D[i][29] = this->maxPrimeInColumn(i);
    }
  };

  // Virtual Function: averageOfLastRow
  // Calculates the average of elements in the last row of the matrix
  virtual float averageOfLastRow() {
    float sum = 0;
    for (int i = 0; i < n; i++) {
      sum += D[29][i];
    }
    return sum / n;
  };

  // Function: displayAverageOfLastRow
  // Displays the average of elements in the last row of the matrix
  void displayAverageOfLastRow() {
    cout << this->averageOfLastRow();
  };
};

// Class Data1: Derived from Data, provides additional operations
class Data1 : public Data {
private:
  float D1[30]; // Array of floats

public:
  // Function: factorial
  // Calculates the factorial of a given number
  float factorial(float num) {
    int fact = 1;
    for (int i = num; i > 0; i--)
    {
      fact *= i;
    }
  };

  // Function: setData1
  // Sets data members such that each D1[i] is a factorial of a given number
  void setData1() {
    this->readData();
    int num;
    for (int i = 0; i < n; i++)
    {
      cout << "Enter a number: ";
      cin >> num;
      D1[i] = this->factorial(num);
    }
  };

  // Function: displayData1
  // Displays the elements of array D1
  void displayData1();

  // Function: averageOfD1
  // Calculates the average of all elements in array D1
  float averageOfD1();
};

// Main function: Entry point of the program
int main() {
  // Define pointers from Data class and objects from all classes
  Data* dataPtr = nullptr;
  Data dataObj;
  Data1 data1Obj;

  // Use pointers to apply all functions
  dataPtr = &dataObj;
  dataPtr->readData();
  dataPtr->setLastRow();
  dataPtr->displayAverageOfLastRow();

  dataPtr = &data1Obj;
  dataPtr->readData();
  dataPtr->setLastRow();
  dataPtr->displayAverageOfLastRow();

  // Display function in Data class to display all averages for two class
}