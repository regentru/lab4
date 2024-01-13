#include "Complex"
#include <iostream>
#include <cmath>

using namespace std ;

Complex::Complex(double a_re, double a_im) {
	re = a_re;
	im = a_im;
}

void Complex::Set(double a_re, double a_im) {
re = a_re;
im = a_im;
}

void Complex::Set(const Complex & a) {
	re = a.Re();
	im = a.Im();
}

void Complex::Print() const {
	cout << '(' << re << ", " << im << ')';
}

double Complex::Re() const {
	return re;
}

double Complex::Im() const {
	return im;
}

double Complex::Mod() const {
	return hypot(re, im);
}

double Complex::Arg() const {
	return atan2(im, re);
}

Complex Complex::operator-() {
	re = -re;
	im = -im;
	return Complex(re, im);
}

Complex Complex::Conjugate() const {
	return Complex(re, -im);
}

Complex Complex::operator+(const Complex & op2) const {
	return Complex(re + op2.re, im + op2.im);
}

Complex Complex::operator-(const Complex & op2) const {
	return Complex(re - op2.re, im - op2.im);
}

Complex Complex::operator*(const Complex & op2) const {
	return Complex(re*op2.re - im*op2.im, re*op2.im + im*op2.re);
}

Complex Complex::operator/(const Complex & op2) const {
	double dvs = op2.re*op2.re + op2.im*op2.im;
	return Complex((re*op2.re + im*op2.im)/dvs, (im*op2.re -re*op2.im)/dvs);
}

bool Complex::operator==(const Complex & op2) const {
	if(re == op2.re && im == op2.im)
		return true;
	else
		return false;
}

bool Complex::operator!=(const Complex & op2 ) const {
	if (re != op2.re || im != op2.im)
		return true;
	else
		return false;
}

Complex::~Complex() {}
