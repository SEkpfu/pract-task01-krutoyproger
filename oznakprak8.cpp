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
	float* a, * b, * c;
	float mini, nom, maxi, mon, u, k, obsh, n;
	cout << "Сколько всего работников: " << endl;
	cin >> n;
	a = new float[n];
	b = new float[n];
	c = new float[n];
	mini = 100000000000;
	maxi = -10;
	obsh = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Работник номер " << i + 1 << ": " << endl;
		cout << "Часов: ";
		cin >> *(a + i);
		cout << "Почасовая ставка: ";
		cin >> *(b + i);
		u = ost(calc(*(a + i), *(b + i)));
		k = nal(calc(*(a + i), *(b + i)));
		if (u < mini)
		{
			mini = u;
			nom = i + 1;
		}
		if (u > maxi)
		{
			maxi = u;
			mon = i + 1;
		}
		*(c + i) = u;
		obsh += k;
		cout << " " << endl;
	}
	cout << "Меньше всего получил работник номер " << nom << endl;
	cout << "Больше всего получил работник номер " << mon << ", - " << maxi << endl;
	cout << "Все, кто получил более 50_000 рублей:" << endl;
	for (int i = 0; i < n; i++)
	{
		if (*(c + i) > 50000)
		{
			cout << "Работник номер " << i + 1 << " получил " << *(c + i) << endl;
		}
	}
	cout << "Общая сумма налога: " << obsh << endl;
}