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
	int n,m,c;
	bool b;

	cout << "Введите размерность блока шифрования: " << endl;
	cin >> n;
	cin >> m;

	cout << "Программа может как шифровать (0), так и расшифровывать (1) сообщения. Выберете (0) или (1): " << endl;
	cin >> b;

	cout << "Введите ключ шифрования от 1 до" << ' ' << n << endl;
	for (int i=0;i<n;i++)
	{
		cin >> key[i];
	}

	for (int i=0;i<n;i++)
	{
		keyAlt[i]=i+1;
	}

	// for (int i=0;i<n;i++)
	// {
	// 	cout << keyAlt[i];
	// }

	for (int i=0;i<n;i++)
	{
		keyAlt2[i]=i;
	}

	// for (int i=0;i<n;i++)
	// {
	// 	cout << keyAlt2[i];
	// }

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

	// for (int i=0;i<n;i++)
	// {
	// 	cout << keyIndex[i];
	// }

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

	// for (int i=0;i<n;i++)
	// {
	// 	cout << keyIndex2[i];
	// }

	if (b==0)
	{
		cout << "Введите сообщение: " << endl;
		for (int i=0;i<m;i++)
		{
			for (int j=0;j<n;j++)
			{
				cin >> Matrix[i][j];
			}
		}
		
		cout << "Полученное сообщение: " << endl;
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{	
				cout << Matrix[j][keyIndex[i]];
			}
		}
		// for (int i=0;i<m;i++)
		// {
		// 	cout<<endl;
		// 	for (int j=0;j<n;j++)
		// 	{
		// 		cout << Matrix[i][j]<<' ';
		// 	}
	}

	if (b==1)
	{
		cout << "Введите сообщение: " << endl;
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<m;j++)
			{
				cin >> Matrix[i][j];
			}
		}

		cout << "Полученное сообщение: " << endl;
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