#include <iostream>
#include <cmath>
using namespace std;

// Get two numbers (coordinates of a point)
void getPoint(int& x, int& y) {
  cout << "Enter x coordinate: ";
  cin >> x;
  cout << "Enter y coordinate: ";
  cin >> y;
}

// Display two numbers as a point's format
void displayPoint(int x, int y) {
  cout << "(" << x << ", " << y << ")";
}

// Calculate distance between two points
double calculateDistance(int x1, int y1, int x2, int y2) {
  return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

// Function to swap two points' coordinates
void swapPoints(int& x1, int& y1, int& x2, int& y2) {
  int tempX = x1;
  int tempY = y1;
  x1 = x2;
  y1 = y2;
  x2 = tempX;
  y2 = tempY;
}

int main() {
  int x1, y1, x2, y2;

  // Get coordinates for two points
  cout << "Enter coordinates for first point:\n";
  getPoint(x1, y1);
  cout << "\nuEnter coordinates for second point:\n";
  getPoint(x2, y2);

  // Display points
  cout << "First point: ";
  displayPoint(x1, y1);
  cout << endl;
  cout << "Second point: ";
  displayPoint(x2, y2);
  cout << endl;

  // Calculate distance
  double distance = calculateDistance(x1, y1, x2, y2);
  cout << "Distance between the points: " << distance << endl;

  // Swap points
  cout << "Swapping points...\n";
  swapPoints(x1, y1, x2, y2);

  // Display after swap
  cout << "First point after swap: ";
  displayPoint(x1, y1);
  cout << endl;
  cout << "Second point after swap: ";
  displayPoint(x2, y2);
  cout << endl;

  return 0;
}
