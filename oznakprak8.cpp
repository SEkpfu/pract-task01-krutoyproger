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
	cout << "������� ����� ����������: " << endl;
	cin >> n;
	a = new float[n];
	b = new float[n];
	c = new float[n];
	mini = 100000000000;
	maxi = -10;
	obsh = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "�������� ����� " << i + 1 << ": " << endl;
		cout << "�����: ";
		cin >> *(a + i);
		cout << "��������� ������: ";
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
	cout << "������ ����� ������� �������� ����� " << nom << endl;
	cout << "������ ����� ������� �������� ����� " << mon << ", - " << maxi << endl;
	cout << "���, ��� ������� ����� 50_000 ������:" << endl;
	for (int i = 0; i < n; i++)
	{
		if (*(c + i) > 50000)
		{
			cout << "�������� ����� " << i + 1 << " ������� " << *(c + i) << endl;
		}
	}
	cout << "����� ����� ������: " << obsh << endl;
}