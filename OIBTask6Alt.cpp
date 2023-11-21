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
	char Matrix[200][200];
	int key [200];
	int keyAlt [200];
	int keyAlt2 [200];
	int keyIndex [200];
	int keyIndex2 [200];
	int keyDop [200];
	int keyDop2 [200];
	int n,m,l;
	bool b;

	cout << "Введите размерность блока шифрования: " << endl;
	cin >> n;
	cin >> m;

	cin >> l;

	cout << "Программа может как шифровать (0), так и расшифровывать (1) сообщения. Выберете (0) или (1): " << endl;
	cin >> b;

	cout << "Введите ключ шифрования от 1 до" << ' ' << n << endl;
	for (int i=0;i<n;i++)
	{
		cin >> key[i];
	}

	cout << "Введите дополнительный ключ шифрования:" << endl;

	for (int i=0;i<l;i++)
	{
		cin >> keyDop[i];
	}


	for (int i=0;i<l;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (keyDop[i]/n==j)
			{
				// cout << "yes" << ' ';
				keyDop2[i]=keyDop[i]+2*j;
				// cout << keyDop2[i] << ' ';
			}
		}
	}


	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (stoi(to_string(i)+to_string(j))==keyDop2[n])
			{
				Matrix[i][j]='-';
				i=i+1;
			}
			cin >> Matrix[i][j];
		}
	}

	

	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			cout << Matrix[i][j];
		}
	}

}