#pragma once
#include <iostream>
using namespace std;
class Complex
{
	double* first;
	double* second;
public:
	/*
	<Конструктор по умолчанию>
	@param Complex* this
	@return NULL
	*/
	Complex();
	/*
	<Конструктор>
	@param double first - действительная часть
	@param double second - мнимая часть
	@return NULL
	*/
	Complex(double first, double second);
	/*
	<Деструктор>
	@param Complex* this
	@return NULL
	*/
	~Complex();
	/*
	<Конструктор копирования>
	@param Complex* this
	@param const Complex& other - объект класса, который используется для создания копии
	@return NULL
	*/
	Complex(const Complex& obj);
	/*
	<Перегруженный оператор присваивания>
	@param Complex* this
	@param const Complex& other -  объект, к которому *this присваивается
	@return Complex& 
	*/
	Complex& operator=(const Complex& other);
	/*
	<Перегруженный оператор сложения>
	@param Complex* this
	@param const Complex& other -  объект, который складывается с *this
	@return Complex 
	*/
	Complex operator+(const Complex& other);
	/*
	<Перегруженный оператор вычитания>
	@param Complex* this
	@param const Complex& other -  объект, который вычитается из *this
	@return Complex 
	*/
	Complex operator-(const Complex& other);
	/*
	<Перегруженный оператор умножения>
	@param Complex* this
	@param const Complex& other -  объект, на который умножается *this
	@return Complex 
	*/
	Complex operator*(const Complex& other);
	/*
	<Перегруженный оператор деления>
	@param Complex* this
	@param const Complex& other -  объект, на который делится *this
	@return Complex 
	*/
	Complex operator/(const Complex& other);
	/*
	<Перегруженный оператор сложения с присваиванием>
	@param Complex* this
	@param const Complex& other -  объект, который складывается с *this
	@return Complex& 
	*/
	Complex& operator+=(const Complex& other);
	/*
	<Перегруженный оператор вычитания с присваиванием>
	@param Complex* this
	@param const Complex& other -  объект, который вычитается из *this
	@return Complex& 
	*/
	Complex& operator-=(const Complex& other);
	/*
	<Перегруженный оператор деления с присваиванием>
	@param Complex* this
	@param const Complex& other -  объект, на который делится *this
	@return Complex& 
	*/
	Complex& operator/=(const Complex& other);
	/*
	<Перегруженный оператор умножения с присваиванием>
	@param Complex* this
	@param const Complex& other -  объект, на который умножается *this
	@return Complex& 
	*/
	Complex& operator*=(const Complex& other);
	/*
	<Перегруженный оператор равенства>
	@param  Complex* this
	@param const  Complex& other -  объект, с которым сравнивается *this
	@return bool 
	*/
	bool operator==(const Complex& other);
	/*
	<Перегруженный оператор неравенства>
	@param Complex* this
	@param const Complex& other -  объект, с которым сравнивается *this
	@return bool 
	*/
	bool operator!=(const Complex& other);
	/*
	<Дружественный, перегруженный оператор вывода>
	@param ostream& out - поток, в который записываются данные
	@param const Complex& obj -  объект, который который выводится на экран
	@return ostream& (ссылка на поток вывода ostream, для совместимости с другими операторами)
	*/
	friend ostream& operator<<(ostream& out,const Complex& obj);
	/*
	<Дружественный, перегруженный оператор ввода>
	@param istream& in - поток, с которого осуществляется чтение
	@param Complex& obj -  объект, в который вводятся значения
	@return istream& (ссылка на поток ввода istream)
	*/
	friend istream& operator>>(istream& in,Complex& obj);
};

