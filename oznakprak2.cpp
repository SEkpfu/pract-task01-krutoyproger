#include <iostream>
using namespace std;
double calc(double,double,double);
double nalog(double);
double zarplata(double, double);
int main()
{
	setlocale(LC_ALL, "Rus");
	double st, hours, proc;
	cin >> st >> hours>>proc;
	int x = calc(st,hours,proc);
	int y = nalog(x);
	int ans = zarplata(x, y);
	cout << ans;
}
double calc(double x, double y, double z)
{
	return x * y * (1.0 + (z / 100.0));
}
double nalog(double x)
{
	return x * 0.13;
}
double zarplata(double x,double y)
{
	return x - y;
}