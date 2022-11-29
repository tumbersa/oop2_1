#pragma once
#include <iostream>
using namespace std;
class Complex
{
	double* first;
	double* second;
public:
	/*
	<����������� �� ���������>
	@param Complex* this
	@return NULL
	*/
	Complex();
	/*
	<�����������>
	@param double first - �������������� �����
	@param double second - ������ �����
	@return NULL
	*/
	Complex(double first, double second);
	/*
	<����������>
	@param Complex* this
	@return NULL
	*/
	~Complex();
	/*
	<����������� �����������>
	@param Complex* this
	@param const Complex& other - ������ ������, ������� ������������ ��� �������� �����
	@return NULL
	*/
	Complex(const Complex& obj);
	/*
	<������������� �������� ������������>
	@param Complex* this
	@param const Complex& other -  ������, � �������� *this �������������
	@return Complex& 
	*/
	Complex& operator=(const Complex& other);
	/*
	<������������� �������� ��������>
	@param Complex* this
	@param const Complex& other -  ������, ������� ������������ � *this
	@return Complex 
	*/
	Complex operator+(const Complex& other);
	/*
	<������������� �������� ���������>
	@param Complex* this
	@param const Complex& other -  ������, ������� ���������� �� *this
	@return Complex 
	*/
	Complex operator-(const Complex& other);
	/*
	<������������� �������� ���������>
	@param Complex* this
	@param const Complex& other -  ������, �� ������� ���������� *this
	@return Complex 
	*/
	Complex operator*(const Complex& other);
	/*
	<������������� �������� �������>
	@param Complex* this
	@param const Complex& other -  ������, �� ������� ������� *this
	@return Complex 
	*/
	Complex operator/(const Complex& other);
	/*
	<������������� �������� �������� � �������������>
	@param Complex* this
	@param const Complex& other -  ������, ������� ������������ � *this
	@return Complex& 
	*/
	Complex& operator+=(const Complex& other);
	/*
	<������������� �������� ��������� � �������������>
	@param Complex* this
	@param const Complex& other -  ������, ������� ���������� �� *this
	@return Complex& 
	*/
	Complex& operator-=(const Complex& other);
	/*
	<������������� �������� ������� � �������������>
	@param Complex* this
	@param const Complex& other -  ������, �� ������� ������� *this
	@return Complex& 
	*/
	Complex& operator/=(const Complex& other);
	/*
	<������������� �������� ��������� � �������������>
	@param Complex* this
	@param const Complex& other -  ������, �� ������� ���������� *this
	@return Complex& 
	*/
	Complex& operator*=(const Complex& other);
	/*
	<������������� �������� ���������>
	@param  Complex* this
	@param const  Complex& other -  ������, � ������� ������������ *this
	@return bool 
	*/
	bool operator==(const Complex& other);
	/*
	<������������� �������� �����������>
	@param Complex* this
	@param const Complex& other -  ������, � ������� ������������ *this
	@return bool 
	*/
	bool operator!=(const Complex& other);
	/*
	<�������������, ������������� �������� ������>
	@param ostream& out - �����, � ������� ������������ ������
	@param const Complex& obj -  ������, ������� ������� ��������� �� �����
	@return ostream& (������ �� ����� ������ ostream, ��� ������������� � ������� �����������)
	*/
	friend ostream& operator<<(ostream& out,const Complex& obj);
	/*
	<�������������, ������������� �������� �����>
	@param istream& in - �����, � �������� �������������� ������
	@param Complex& obj -  ������, � ������� �������� ��������
	@return istream& (������ �� ����� ����� istream)
	*/
	friend istream& operator>>(istream& in,Complex& obj);
};

