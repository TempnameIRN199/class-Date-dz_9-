#pragma once
#include "Header.h"
// Создайте класс с именем Date для хранения даты (или используйте ранее созданный).
// В классе должна быть функция - член, которая увеличивает день на 1.
// Напишите соответствующие конструкторы и функции - члены.
// В классе должны быть перегружены операциии++, --, != , == , > , <, >> , << , =, +=, -=, ().
// Используйте обычную и дружественную перегрузку.

class Date
{
private:
	int day;
	int month;
	int year;
public:
	// функция - член, которая увеличивает день на 1
	void incDay();
	// конструктор для функции incDay()
	Date();
	// перегруженные операции ++, --, !=, ==, >, <, >>, <<, =, +=, -=, ()
	Date operator++();
	Date operator--();
	bool operator!=(const Date& d);
	bool operator==(const Date& d);
	bool operator>(const Date& d);
	bool operator<(const Date& d);
	friend istream& operator>>(istream& in, Date& d);
	friend ostream& operator<<(ostream& out, const Date& d);
	Date& operator=(const Date& d);
	Date& operator+=(const Date& d);
	Date& operator-=(const Date& d);
	Date operator()(int day, int month, int year);
	// конструкторы
	Date(int day, int month, int year);
	// деструктор
	~Date();
	// функции члены
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	int getDay();
	int getMonth();
	int getYear();
	// функция - член, которая проверяет високосный ли год
	bool isLeapYear();
	// функция - член, которая проверяет корректность даты
	bool isCorrectDate();
	// функция - член, которая выводит дату на экран
	void printDate();
};