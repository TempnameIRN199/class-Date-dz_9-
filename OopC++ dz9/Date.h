#pragma once
#include "Header.h"
// �������� ����� � ������ Date ��� �������� ���� (��� ����������� ����� ���������).
// � ������ ������ ���� ������� - ����, ������� ����������� ���� �� 1.
// �������� ��������������� ������������ � ������� - �����.
// � ������ ������ ���� ����������� ���������++, --, != , == , > , <, >> , << , =, +=, -=, ().
// ����������� ������� � ������������� ����������.

class Date
{
private:
	int day;
	int month;
	int year;
public:
	// ������� - ����, ������� ����������� ���� �� 1
	void incDay();
	// ����������� ��� ������� incDay()
	Date();
	// ������������� �������� ++, --, !=, ==, >, <, >>, <<, =, +=, -=, ()
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
	// ������������
	Date(int day, int month, int year);
	// ����������
	~Date();
	// ������� �����
	void setDay(int day);
	void setMonth(int month);
	void setYear(int year);
	int getDay();
	int getMonth();
	int getYear();
	// ������� - ����, ������� ��������� ���������� �� ���
	bool isLeapYear();
	// ������� - ����, ������� ��������� ������������ ����
	bool isCorrectDate();
	// ������� - ����, ������� ������� ���� �� �����
	void printDate();
};