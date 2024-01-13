#include <iostream>
#include "Complex"

using namespace std;

int main() {
	cout << "The program tests the Complex library\n\n";
	Complex a(2, 3), b, c, d;

	cout << "a = ";
	a.Print();
	cout << endl;

	cout << "-a = ";
	(-a).Print();
	cout << endl;

	b.Set(-a.Re(), -a.Im());
	cout << "b = ";
	b.Print();
	cout << endl;

	c.Set(-a);
	cout << "c = ";
	c.Print();
	cout << endl;

	d = -a;
	cout << "d = ";
	d.Print();
	cout << endl;

	return 0;
}
