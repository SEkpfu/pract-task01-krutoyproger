#include<iostream>
#include <windows.h>
using namespace std;

float calc(float& a, float& b)
{
	return a * b;
}
float nal(float(a))
{
	return a * 0.13;
}
float ost(float(a))
{
	return a * 0.87;
}
void main()
{
	setlocale(LC_ALL, "");
	SetConsoleOutputCP(CP_UTF8);
	SetConsoleCP(CP_UTF8);
	float a, b, x, y, h, j, k, l;
	string c, d;
	cin >> a >> b;
	c = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	x = nal(calc(a, b));
	y = ost(calc(a, b));
	while (c.length() > 40)
	{
		cout << "¬ведите свою фамилию на русском длиной не более 20 символов: " << endl;
		cin >> c;
	}
	cin >> h >> j;
	d = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
	k = nal(calc(h, j));
	l = ost(calc(h, j));
	while (d.length() > 40)
	{
		cout << "¬ведите свою фамилию на русском длиной не более 20 символов: " << endl;
		cin >> d;
	}
	cout << " то получил на руки меньше 1000 рублей:" << endl;
	if (y < 1000)
	{
		if (x > 50)
		{
			cout << c.substr(0, 1) << "-" << c.substr(c.length() - 1, 1) << endl;
		}
		else
		{
			cout << c << endl;
		}
	}
	if (l < 1000)
	{
		if (k > 50)
		{
			cout << d.substr(0, 1) << "-" << d.substr(d.length() - 1, 1) << endl;
		}
		else
		{
			cout << d << endl;
		}
	}
}