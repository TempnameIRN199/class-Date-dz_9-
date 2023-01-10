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
		cout << "���� " << d1 << " ���������" << endl;
	else
		cout << "���� " << d1 << " �� ���������" << endl;
	
	if (d2.isCorrectDate())
		cout << "���� " << d2 << " ���������" << endl;
	else
		cout << "���� " << d2 << " �� ���������" << endl;
	
	if (d1.isLeapYear())
		cout << "��� " << d1.getYear() << " ����������" << endl;
	else
		cout << "��� " << d1.getYear() << " �� ����������" << endl;
	
	if (d2.isLeapYear())
		cout << "��� " << d2.getYear() << " ����������" << endl;
	else
		cout << "��� " << d2.getYear() << " �� ����������" << endl;
	
	return 0;
}