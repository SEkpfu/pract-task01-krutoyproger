#include<iostream>
using namespace std;

float num_min(float a[], int size)
{
	int q, r;
	q = 9999999999;
	r = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(a + i) < q)
		{
			q = *(a + i);
			r = i + 1;
		}
	}
	return r;
}
float digit_max(float a[], int size)
{
	int q;
	q = -1;
	for (int i = 0; i < size; i++)
	{
		if (*(a + i) > q)
		{
			q = *(a + i);
		}
	}
	return q;
}
float num_max(float a[], int size)
{
	int q, r;
	q = -1;
	r = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(a + i) > q)
		{
			q = *(a + i);
			r = i + 1;
		}
	}
	return r;
}
float schet(float a[], int size, int za)
{
	int q;
	q = 0;
	for (int i = 0; i < size; i++)
	{
		if (*(a + i) > za)
		{
			q += 1;
		}
	}
	return q;
}
float sum_el(float a[], int size)
{
	int q;
	q = 0;
	for (int i = 0; i < size; i++)
	{
		q += *(a + i);
	}
	return q;
}
void main()
{
	setlocale(LC_ALL, "");
	float*m, n, t;
	cout << "������� ��������� �������: " << endl;
	cin >> t;
	cout << "�������� �����: " << endl;
	cin >> n;
	m = new float[n];
	cout << "�����: " << endl;
	for (int i = 0; i < t; i++)
	{
		cin >> *(m + i);
	}
	cout << "����� ������������� ��������: " << num_min(m, t) << endl;
	cout << "������������ �������: " << digit_max(m, t) << ", ����� ��� ��������: " << num_max(m, t) << endl;
	cout << "���������� ��� ���������, ������� ������ ��������� �����: " << schet(m, t, n) << endl;
	cout << "����� ���������: " << sum_el(m, t) << endl;
}