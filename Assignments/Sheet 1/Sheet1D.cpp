#include<iostream>
using namespace std;

struct result {
  int index;
  bool found;
};

void read(int a[], int size) {
  for (int i = 0; i < size; i++) {
    cin >> a[i];
  }
}

void display(int a[], int size) {
  for (int i = 0; i < size; i++) {
    cout << a[i] << " " << endl;
  }
}
int reverse(int a[], int size) {
  int b[size];
  for (int i = 0; i < size; i++) {
    b[size - i + 1] = a[i];
  }
}

result search(int a[], int size, int x) {
  result r = { -1, false };

  for (int i = 0; i < size; i++) {
    if (a[i] == x) {
      r.found = true;
      r.index = i;
      break;
    }
  }
  return r;
}

void replace(int a[],int size, int x, int y) {
  result r = search(a, size, x);

  if (r.found) {
    a[r.index] = y;
  }

  display(a, 10);
}

int main() {
  int a[10];
  read(a, 10);
  reverse(a, 10);
  replace(a, 10, 3, 5);
}