#include <iostream>
#include <string.h>
#include <windows.h>
#include <algorithm>
#include <stdio.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	char Matrix [200][200];
	int key [200];
	int keyAlt [200];
	int keyAlt2 [200];
	int keyIndex [200];
	int keyIndex2 [200];
	int n,m;
	bool b;

	cout << "������� ����������� ����� ����������: " << endl;
	cin >> n;
	cin >> m;

	cout << "��������� ����� ��� ��������� (0), ��� � �������������� (1) ���������. �������� (0) ��� (1): " << endl;
	cin >> b;

	cout << "������� ���� ����������: " << endl;
	for (int i=0;i<n;i++)
	{
		cin >> key[i];
	}

	for (int i=0;i<n;i++)
	{
		keyAlt[i]=i+1;
	}

	for (int i=0;i<n;i++)
	{
		keyAlt2[i]=i;
	}

	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (keyAlt[i]==key[j])
			{
				keyIndex[i]=j;
			}
		}
	}

	for (int i=0;i<n;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (keyAlt2[i]==keyIndex[j])
			{
				keyIndex2[i]=j;
			}
		}
	}

	if (b==0)
	{
		cout << "������� ���������: " << endl;
		for (int i=0;i<m;i++)
		{
			for (int j=0;j<n;j++)
			{
				cin >> Matrix[i][j];
			}
		}
		
		cout << "���������� ���������: " << endl;
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{	
				cout << Matrix[j][keyIndex[i]];
			}
		}
	}

	if (b==1)
	{
		cout << "������� ���������: " << endl;
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{
				cin >> Matrix[i][j];
			}
		}

		cout << "���������� ���������: " << endl;
		for (int i=0;i<m;i++)
		{
			for (int j=0;j<n;j++)
			{
				cout << Matrix[keyIndex2[j]][i];
			}
		}

	}
	return 0;
	


}