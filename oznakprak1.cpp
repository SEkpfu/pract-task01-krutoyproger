#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Rus");
	double st, hours, proc;
	cin >> st >> hours >> proc;
	cout << st * hours * (1.0 + proc / 100);
}