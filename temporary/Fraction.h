#pragma once
#include <iostream>
using namespace std;

class Fraction {

private:
	long first;
	unsigned short second;
public:
	void set(long f, unsigned short s) {
		first = f;
		second = s;
	}
	Fraction() {
		first = 0;
		second = 0;
	}
	Fraction(long f, unsigned short s) {
		first = f;
		second = s;
	}
	long getfirst() {
		return first;
	}
	unsigned short getsecond() {
		return second;
	}

	/*void get() {
		cout << first << "." << second;
	}
	bool isEq(const Fraction& obj) {
		if (first == obj.first && second == obj.second) {
			return true;
		}
		else {
			return false;
		}
	}
	void Sum(const Fraction& obj) {
	first += obj.first;
	unsigned short e = 10,
		max = std::max(second, obj.second);
	second += obj.second;
	while (max > e)
		e *= 10;
	if (second > e) {
		second %= e;
		++first;
	}
	void Sum(const Fraction& obj) {
		first += obj.first;
		second += obj.second;
	}
	void Display() {
		cout << first << "." << second << endl;
	}*/

	/*
	void read() {
		cout << "\nCelaya chast': "; cin >> first;
		cout << "Drobnaya chast': "; cin >> second;
	}

	void display() {
		cout << first << "." << second << endl;
	}

	static void Add(Fraction a, Fraction b) {
		cout << "\nAddition: " << a.first + b.first << "." << a.second + b.second << endl;
	}

	static void Sub(Fraction a, Fraction b) {
		cout << "Subtraction: " << a.first - b.first << "." << a.second - b.second << endl;
	}

	static void Mul(Fraction a, Fraction b) {
		cout << "Multiplication: " << a.first*b.first << "." << a.second*b.second << endl;
	}

	static void Equal(Fraction a, Fraction b) {
		if (a.first == b.first && a.second == b.second)
		{
			cout << "Are Equal" << endl;
		}
		else {
			if ((a.first - b.first) > 0) {
				cout << "Number 1 > Number 2\n\n";
			}
			else {
				cout << "Number 1 < Number 2\n\n";
			}
		}
	};
	};*/
};