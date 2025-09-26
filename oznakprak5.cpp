#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	cout << "Данные первого работника:";
	float a, b,c,d;
	cin >> a >> b;
	float zar1 = a * b;
	cout << "Данные второго работника";
	cin >> c >> d;
	float zar2 = c * d;
	if (zar1 > zar2)
	{
		cout << "Первый заработал больше";
	}
	if (zar2 > zar1)
	{
		cout << "Второй заработал больше";
	}
	else
	{
		cout << "Поровну";
	}
	cout << "Общая заработанная плата " << zar1 + zar2;
}
