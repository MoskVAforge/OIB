#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char alfabetOriginal [] = {"�����������娸����������������������������������������������������0123456789., ?!"};
	char alfabet1 [] = {",�������������������0����� ��23�6������������8�19��4��.������������?��!��5���7��"};
	char alfabet2 [] = {"�����?�����0������ �8�2����!��6������5���.4����������������,����������7��39��1���"};
	char alfabet3 [] = {"��7������9�1�����8��3����������������������4� Ѩ����2����,��!���05���.�6����?����"};
	char word [200];
	bool b;

	cout << "������� �������� ���������: " << endl;
	gets(word);
	cout << "��� ��������� ����� ������������� (0) � �������������� (1) ���������. �������� �������� (0) ��� (1): " << endl;
	cin >> b;							

	
	if (b==0)
	{
		cout << "������������� ���������: " << endl;
		for (int i=0;i<strlen(word);i++)
		{ 
			for (int j=0;j<strlen(alfabetOriginal);j++)
			{
				if (word[i]==alfabetOriginal[j])
				{
					if (i%3==0)
					{
						cout << alfabet1[j];
					}

					if (i%3==1)
					{
						cout << alfabet2[j];
					}

					if (i%3==2)
					{
						cout << alfabet3[j];
					}
				}
			}
		}
	}

	if (b==1)
	{
		cout << "�������������� ���������: " << endl;
		for (int i=0;i<strlen(word);i++)
		{
			if (i%3==0)
			{
				for (int j=0;j<strlen(alfabet1);j++)
				{
					if (word[i]==alfabet1[j])
					{
						cout << alfabetOriginal[j];
					}
				}
			}

			if (i%3==1)
			{
				for (int j=0;j<strlen(alfabet2);j++)
				{
					if (word[i]==alfabet2[j])
					{
						cout << alfabetOriginal[j];
					}
				}
			}

			if (i%3==2)
			{
				for (int j=0;j<strlen(alfabet3);j++)
				{
					if (word[i]==alfabet3[j])
					{
						cout << alfabetOriginal[j];
					}
				}
			}
		}
	}

	return 0;

}