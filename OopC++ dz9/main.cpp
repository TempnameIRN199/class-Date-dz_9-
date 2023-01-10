#include "Date.h"
#include "Header.h"

int main()
{
	setlocale(0, "");
	Date d1;
	cin >> d1;
	cout << d1;
	d1.incDay();
	cout << d1;
	d1--;
	cout << d1;
	++d1;
	cout << d1;
	Date d2(1, 1, 2000);
	cout << d2;
	d2++;
	cout << d2;
	d2--;
	cout << d2;
	++d2;
	cout << d2;
	
	if (d1.isCorrectDate())
		cout << "Дата " << d1 << " корректна" << endl;
	else
		cout << "Дата " << d1 << " не корректна" << endl;
	
	if (d2.isCorrectDate())
		cout << "Дата " << d2 << " корректна" << endl;
	else
		cout << "Дата " << d2 << " не корректна" << endl;
	
	if (d1.isLeapYear())
		cout << "Год " << d1.getYear() << " високосный" << endl;
	else
		cout << "Год " << d1.getYear() << " не високосный" << endl;
	
	if (d2.isLeapYear())
		cout << "Год " << d2.getYear() << " високосный" << endl;
	else
		cout << "Год " << d2.getYear() << " не високосный" << endl;
	
	return 0;
}