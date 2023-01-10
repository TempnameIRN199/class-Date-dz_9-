#include "Header.h"
#include "Date.h"

Date::Date()
{
	time_t t = time(0);
	struct tm* now = localtime(&t);
	day = now->tm_mday;
	month = now->tm_mon + 1;
	year = now->tm_year + 1900;
}

Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

Date::~Date()
{
	delete[] this;
}

void Date::incDay()
{
	if (day == 31 && month == 12)
	{
		day = 1;
		month = 1;
		year++;
	}
	else if (day == 31 && month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10)
	{
		day = 1;
		month++;
	}
	else if (day == 30 && month == 4 || month == 6 || month == 9 || month == 11)
	{
		day = 1;
		month++;
	}
	else if (day == 28 && month == 2)
	{
		day = 1;
		month++;
	}
	else if (day == 29 && month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
	{
		day = 1;
		month++;
	}
	else
	{
		day++;
	}
}

Date Date::operator++()
{
	incDay();
	return *this;
}

Date Date::operator--()
{
	if (day == 1 && month == 1)
	{
		day = 31;
		month = 12;
		year--;
	}
	else if (day == 1 && month == 2 || month == 4 || month == 6 || month == 8 || month == 9 || month == 11 || month == 1)
	{
		day = 31;
		month--;
	}
	else if (day == 1 && month == 5 || month == 7 || month == 10 || month == 12)
	{
		day = 30;
		month--;
	}
	else if (day == 1 && month == 3 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
	{
		day = 29;
		month--;
	}
	else if (day == 1 && month == 3 && !(year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
	{
		day = 28;
		month--;
	}
	else
	{
		day--;
	}
	return *this;
}

bool Date::operator!=(const Date& d)
{
	if (day != d.day || month != d.month || year != d.year)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Date::operator==(const Date& d)
{
	if (day == d.day && month == d.month && year == d.year)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Date::operator>(const Date& d)
{
	if (year > d.year)
	{
		return true;
	}
	else if (year == d.year && month > d.month)
	{
		return true;
	}
	else if (year == d.year && month == d.month && day > d.day)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Date::operator<(const Date& d)
{
	if (year < d.year)
	{
		return true;
	}
	else if (year == d.year && month < d.month)
	{
		return true;
	}
	else if (year == d.year && month == d.month && day < d.day)
	{
		return true;
	}
	else
	{
		return false;
	}
}

istream& operator>>(istream& in, Date& d)
{
	cout << "Enter day: ";
	in >> d.day;
	cout << "Enter month: ";
	in >> d.month;
	cout << "Enter year: ";
	in >> d.year;
	return in;
}

ostream& operator<<(ostream& out, const Date& d)
{
	out << d.day << "." << d.month << "." << d.year;
	return out;
}

Date& Date::operator=(const Date& d)
{
	day = d.day;
	month = d.month;
	year = d.year;
	return *this;
}

Date& Date::operator+=(const Date& d)
{
	day += d.day;
	month += d.month;
	year += d.year;
	return *this;
}

Date& Date::operator-=(const Date& d)
{
	day -= d.day;
	month -= d.month;
	year -= d.year;
	return *this;
}

Date Date::operator()(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
	return *this;
}

void Date::setDay(int day)
{
	this->day = day;
}

void Date::setMonth(int month)
{
	this->month = month;
}

void Date::setYear(int year)
{
	this->year = year;
}

int Date::getDay()
{
	return day;
}

int Date::getMonth()
{
	return month;
}

int Date::getYear()
{
	return year;
}

bool Date::isLeapYear()
{
	if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

bool Date::isCorrectDate()
{
	if (day > 0 && day < 32 && month > 0 && month < 13 && year > 0)
	{
		if (day == 31 && month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
		{
			return true;
		}
		else if (day == 30 && month == 4 || month == 6 || month == 9 || month == 11)
		{
			return true;
		}
		else if (day == 28 && month == 2 && !(year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
		{
			return true;
		}
		else if (day == 29 && month == 2 && (year % 4 == 0 && year % 100 != 0 || year % 400 == 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	else
	{
		return false;
	}
}