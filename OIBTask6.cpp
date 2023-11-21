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
	char Matrix2[200][200];
	int key [200];
	int keyAlt [200];
	int keyAlt2 [200];
	int keyIndex [200];
	int keyIndex2 [200];
	int keyDop [200];
	int keyDop2 [200];
	int n,m,l,e;

	cout << "Введите размерность блока шифрования: " << endl;
	cin >> n;
	cin >> m;

	cout << "Введите длину дополнительного ключа шифрования: " << endl;
	cin >> l;

	cout << "Введите ключ шифрования от 1 до" << ' ' << n << endl;
	for (int i=0;i<n;i++)
	{
		cin >> key[i];
	}

	cout << "Введите дополнительный ключ шифрования " << endl;

	for (int i=0;i<l;i++)
	{
		cin >> keyDop[i];
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

	cout << "Введите сообщение: " << endl;
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			cin >> Matrix[i][j];
		}
	}

	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			Matrix2[i][j]=Matrix[i][j];
		}
	}

	for (int i=0;i<l;i++)
	{
		for (int j=0;j<n;j++)
		{
			if (keyDop[i]/n==j)
			{
				keyDop2[i]=keyDop[i]+2*j;
			}
		}
	}

	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			for (int k=0;k<l;k++)
			{
				if (stoi(to_string(i)+to_string(j))==keyDop2[k])
				{
					Matrix[i][j]='-';
				}
			}
		}
	}
		
	cout << "Полученное сообщение: " << endl;
	for (int i=0;i<n;i++)
	{
		for (int j=0;j<m;j++)
		{
			if (Matrix[j][keyIndex[i]]!='-')
			{
				cout << Matrix[j][keyIndex[i]];
			}
		}
	}

	cout << endl;


	cout << "Расшифрованное сообщение: " << endl;
	for (int i=0;i<m;i++)
	{
		for (int j=0;j<n;j++)
		{
			cout << Matrix2[i][j];
		}
	}
		
	return 0;
	


}