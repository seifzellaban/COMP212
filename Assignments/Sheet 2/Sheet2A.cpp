#include <iostream>
#include <iomanip> // To use setw
using namespace std;

struct Data {
  string name;
  float age;
  float salary;
  float tax;
};

struct Employee {
  Data E;
  float net_s = E.salary - E.salary * (E.tax / 100);

  void read() {
    cout << "Enter name: ";
    cin >> E.name;
    cout << "Enter age: ";
    cin >> E.age;
    cout << "Enter salary: ";
    cin >> E.salary;
    cout << "Enter tax: ";
    cin >> E.tax;
  }

  void display() {
    cout << setw(10) << E.name << " " << setw(3) << E.age << " " << setw(7) << E.salary << " " << setw(3) << E.tax << " " << setw(7) << net_s << endl;
  }

  void swap(Employee& x) {
    Data temp = E;
    E = x.E;
    x.E = temp;
  }
};

int main() {
  Employee array[100];
  int n;
  cout << "Enter number of employees: ";
  cin >> n;
  for (int i = 0; i < n; i++) {
    array[i].read();
    cout << endl;
  }
  cout << endl << "Before sorting: " << endl;
  for (int i = 0; i < n; i++) {
    array[i].display();
  }
  for (int i = 0; i < n / 2; i++) {
    for (int j = 0; j < n - 1 - 2 * i; j++) {
      if (array[j].net_s < array[j + 1].net_s) {
        array[i].swap(array[n - 1 - i]);
      }
    }
  }
  cout << endl << "After sorting: " << endl;
  for (int i = 0; i < n; i++) {
    array[i].display();
  }
}