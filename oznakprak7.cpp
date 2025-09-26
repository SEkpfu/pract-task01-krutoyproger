#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	float a, b, x;
	x = 0;
	for (int i = 0; i < 5; i++)
	{
		cin >> a;
		cin >> b;
		cout << " Часы" << a << "Ставка" << b;
		int c = a * b;
		x += a * b;
		cout<<"Общая сумма " << c;
	}
	cout << "Средняя зарплата в бригаде: " << x / 5;
}