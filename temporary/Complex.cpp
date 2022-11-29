#include "Complex.h"
Complex::Complex() {
	first = new double(0);
	second = new double(0);
}
Complex::Complex(double first, double second) {
	this->first = new double(first);
	this->second = new double(second);
}
Complex::~Complex() {
	delete first;
	delete second;
}
Complex::Complex(const Complex& obj) {
	first = new double(*obj.first);
	second = new double(*obj.second);
}
Complex& Complex::operator=(const Complex& other) {
	if (&other != this) {
		delete first;
		delete second;
		first = new double(*other.first);
		second = new double(*other.second);
	}
	return *this;
}
Complex Complex::operator+(const Complex& other) {
	Complex obj;
	obj.first = new double(*first + *other.first);
	obj.second = new double(*second + *other.second);
	return obj;
}
Complex Complex::operator-(const Complex& other) {
	Complex obj;
	obj.first = new double(*first - *other.first);
	obj.second = new double(*second - *other.second);
	return obj;
}
Complex Complex::operator*(const Complex& other) {
	Complex obj;
	obj.first = new double(*first * *other.first - *second * *other.second);
	obj.second = new double(*first * *other.second + *second * *other.first);
	return obj;
}
Complex Complex::operator/(const Complex& other) {
	Complex obj;
	if (pow(*other.first, 2) + pow(*other.second, 2) != 0) {
		obj.first = new double((* first * *other.first + *second * *other.second)/(pow(*other.first, 2) + pow(*other.second, 2)));
		obj.second = new double((*second * *other.first - *first * *other.second)/(pow(*other.first, 2) + pow(*other.second, 2)));
	}
	return obj;
}
Complex& Complex::operator+=(const Complex& other) {
	*this = *this + other;
	return *this;
}
Complex& Complex::operator-=(const Complex& other) {
	*this = *this - other;
	return *this;
}
Complex& Complex::operator/=(const Complex& other) {
	*this = *this / other;
	return *this;
}
Complex& Complex::operator*=(const Complex& other) {
	*this = *this * other;
	return *this;
}
bool Complex::operator==(const Complex& other) {
	return *first == *other.first && *second == *other.second;
}
bool Complex::operator!=(const Complex& other) {
	return *first != *other.first || *second != *other.second;
}
ostream& operator<<(ostream& out,const Complex& obj) {
	if (*obj.second >= 0) {
		out << *obj.first << " + i" << *obj.second;
	}
	else {
		out << *obj.first << " - i" << abs(*obj.second);
	}
	return out;
}
istream& operator>>(istream& in,Complex& obj) {
	in >> *obj.first >> *obj.second;
	return in;
}