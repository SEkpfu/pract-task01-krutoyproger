#include<iostream>
using namespace std;

int vvod(float& r, float& t, float& y)
{
	cout << "����� = ";
	cin >> r;
	cout << "��� �� ��� = ";
	cin >> t;
	cout << "������ % = ";
	cin >> y;
	return 0;
}
int main()
{
	setlocale(LC_ALL, "");
	float a, b, c;
	vvod(a, b, c);
	return 0;
}