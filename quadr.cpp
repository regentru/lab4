#include <iostream>
#include <cmath>
#include "Complex"

using namespace std;

struct Roots {
	Complex x1, x2;
};

Complex input();
Roots solve(const Complex& a, const Complex& b, const Complex& c);

int main() {
	cout << "The program finds the roots of a quadratic equation \na*x^2 + b*x + c = 0\n\n";
	Complex a, b, c;
	do {
		cout << "Number a.\n";
		a = input();
		if(a == 0)
			cout << "Error! a must be not a zero.\nRepeat input.\n";
	} while (a == 0);
	cout << "Number b.\n";
	b = input();
	cout << "Number c.\n";
	c = input ();
	Roots ans = solve (a, b, c);
	cout << "\nSolutions of equation is :";
	cout << "\nx1 = ";
	ans.x1.Print();
	cout << "\ nx2 = ";
	ans.x2.Print();
	cout << endl;
	return 0;
}

Complex input() {
	double re, im;
	cout << "Input Real part of number: ";
	cin >> re;
	cout << "Input Imaginary part of number: ";
	cin >> im;
	return Complex(re, im);
}

Roots solve(const Complex& a, const Complex& b, const Complex& c) {
	Roots ans;
	Complex D = b*b - a*c*4;
	double x = sqrt(D.Mod())*cos(D.Arg()/2);
	double y = sqrt(D.Mod())*sin(D.Arg()/2);
	Complex d(x, y);
	ans.x1 = (-b + d)/2a;
	ans.x2 = (-b - d)/2/a;
	return ans;
}
