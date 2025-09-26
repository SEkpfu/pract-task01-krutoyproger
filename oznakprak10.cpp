#include<iostream>
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
	float a[4][12][2], b, x;
	x = 0;
	for (int i = 0; i < 4; i++)
	{
		cout << "Работник номер " << i + 1 << ":" << endl;
		for (int j = 0; j < 12; j++)
		{
			cout << j + 1 << " месяц:" << endl;
			cout << "Часов в этом месяце: ";
			cin >> b;
			cout << "Почасовая ставка: ";
			cin >> x;
			a[i][j][0] = ost(calc(b, x));
			a[i][j][1] = nal(calc(b, x));
			cout << " " << endl;
		}
		cout << " " << endl;
		cout << " " << endl;
	}
	// Вывести:
	float sum_n, u, n_r, sum_r, obsh;
	cout << "1) " << a[0][1][0] << endl;
	sum_n = 0;
	for (int i = 0; i < 12; i++)
	{
		sum_n += a[2][i][1];
	}
	cout << "2) " << sum_n << endl;
	u = 0;
	sum_r = -1;
	for (int i = 0; i < 4; i++)
	{
		if (u < a[i][2][0])
		{
			u = a[i][2][0];
			sum_r = i + 1;
		}
	}
	cout << "3) " << sum_r << endl;
	obsh = 0;
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 12; j++)
		{
			obsh += a[i][j][0];
		}
	}
	cout << "4) " << obsh << endl;
}