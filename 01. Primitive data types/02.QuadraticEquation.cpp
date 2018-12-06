//Write a program which asks the user for 3 numbers a, b and c and prints the roots of the quadratic equation ax ^ 2 + bx + c = 0. Assume that the equation always has roots.

#include<iostream>
#include<math.h>

using namespace std;

int main() {
	double a, b, c;

	cout << "a: ";
	cin >> a;

	cout << "b: ";
	cin >> b;

	cout << "c: ";
	cin >> c;

	double d = pow(b, 2) - 4 * a*c;

	if (d < 0)
	{
		cout << "no roots found!" << endl;
	}
	else {
		double x1 = (-b + sqrt(d)) / (2 * a);
		double x2 = (-b - sqrt(d)) / (2 * a);

		cout << "x1 = " << x1 << endl << "x2 = " << x2 << endl;
	}
}