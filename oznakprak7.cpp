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
		cout << " ����" << a << "������" << b;
		int c = a * b;
		x += a * b;
		cout<<"����� ����� " << c;
	}
	cout << "������� �������� � �������: " << x / 5;
}