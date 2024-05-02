#include <iostream>
#include <cmath>
using namespace std;
double fact(double x) {
	if (x < 0) {
		x *= -1;
	}
	if (x == 1) {
		return x;
	}
	return x * fact(x - 1);
}
struct Series {
	float a, X[20];
	double S[20];
	int n;
	void read() {
		cout << "n is : ";
		cin >> n;
		for (int i = 0; i < n; i++) {
			cout << "X[" << i << "] = ";
			cin >> X[i];
		}
		for (int i = 0; i < n; i++) {
			for (int k = 0; k <= i; k++) {
				S[i] = (fact(i) / (fact(k) * fact(i - k))) * X[i] * pow(a, (i - k));
			}
		}
	}
	double maximum() {
		double m = S[0];
		for (int i = 0; i < n; i++) {
			if (m < S[i]) {
				m = S[i];
			}
		}
		return m;
	}
	void display() {
		for (int i = 0; i < n; i++) {
			cout << "X[" << i << "] = " << X[i]<<endl;
		}
		cout << "i || S[i]\n";
		for (int i = 0; i < n; i++) {
			cout << i <<" || " << S[i] << endl;
		}
	}
};
void main() {
	Series A1, A2;
	A1.read();
	A2.read();
	cout << "A1.maximum - A2.maximum = "
		<< A1.maximum() - A2.maximum() << endl;
	(A1.maximum() > A2.maximum()) ?
		A1.display() : A2.display();
}
