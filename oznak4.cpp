#include<iostream>
using namespace std;

float zarplata(float(a), float(b), float(c))
{
	return (a * b) * (1 + (c / 100));
}
float nalog(float(a))
{
	return a * 0.13;
}
float resultat(float(a))
{
	return a * 0.87;
}
int vvod(float& r, float& t, float& y)
{
	cout << "Часов = ";
	cin >> r;
	cout << "Рублей за час = ";
	cin >> t;
	cout << "Премия % = ";
	cin >> y;
	return 0;
}
int main()
{
	setlocale(LC_ALL, "");
	float a, b, c, z, x, v;
	vvod(a, b, c);
	z = zarplata(a, b, c);
	x = nalog(z);
	v = resultat(z);
	cout << "До вычета налога: " << z << "\n";
	cout << "Налог: " << x << "\n";
	cout << "Зарплата на руки: " << v << "\n";
	return 0;
}