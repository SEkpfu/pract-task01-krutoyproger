#include<iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "");
	cout << "������ ������� ���������:";
	float a, b,c,d;
	cin >> a >> b;
	float zar1 = a * b;
	cout << "������ ������� ���������";
	cin >> c >> d;
	float zar2 = c * d;
	if (zar1 > zar2)
	{
		cout << "������ ��������� ������";
	}
	if (zar2 > zar1)
	{
		cout << "������ ��������� ������";
	}
	else
	{
		cout << "�������";
	}
	cout << "����� ������������ ����� " << zar1 + zar2;
}
