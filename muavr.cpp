#include <iostream>
#include <cmath>
#include "Complex"

using namespace std;

Complex muavr(const Complex& z, double& m, double& n);

Complex input();

main() {
	Complex z;
	double m, n;
	
	z =  input();
	
	cout << "Введите степень: ";
	cin >> n;
	
	cout << "Введите степень корня: ";
	cin >> m;
	
	Complex ans = muavr(z, m, n);
	
	cout << "Ответ: " << endl;
	ans.Print();

	return 0;
}


Complex input() {
	double re, im;
	cout << "Введите реальную часть числа: ";
	cin >> re;
	cout << "Введите мнимую часть числа: ";
	cin >> im;
	return Complex(re, im);
}

Complex muavr(const Complex& z, double& m, double& n){
	double x;
	double y;
	
	x = pow(z.Mod(), n/m)*cos((n/m)*z.Arg());
	y = pow(z.Mod(), n/m)*sin((n/m)*z.Arg());
	
	return Complex(x, y);
}
