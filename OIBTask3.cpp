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
	char alfabet11 [] = {",�������������������0����� ��23�6������������8�19��4��.������������?��!��5���7��"};
	char alfabet12 [] = {"�����?�����0������ �8�2����!��6������5���.4����������������,����������7��39��1���"};
	char alfabet13 [] = {"��7������9�1�����8��3����������������������4� Ѩ����2����,��!���05���.�6����?����"};
	
	char alfabet21 [] = {"�0!��,2��Ĩ�����41����.�����6 8��?�3����9��5���������7���������������������������"};
	char alfabet22 [] = {"���������5�����.�����1�����2����7������49��?6�������!�,��8������������� �0��3˸��"};
	char alfabet23 [] = {"9�.����������������!�������0 �2����6�1�4�������,�����3��������5�����ߨ����8�?���7"};

	char alfabet31 [] = {"����������������8���?������ �����39��������!0���.,�7��5��2����1����6��4���������"};
	char alfabet32 [] = {"���������7������65��������������3�����84��!?�������,��� ����0����192��.���������"};
	char alfabet33 [] = {"�28���3����Ψ�����6��!������,�9���������7���?��1������� ��0��4������������.�5����"};
	
	char word [200];
	bool b;
	int n;

	gets(word);
	cin >> n;

	for (int i=0;i<strlen(word);i++)
	{
		if (i<n)
		{
			for (int j=0;j<strlen(alfabetOriginal);j++)
			{
				if (word[i]==alfabetOriginal[j])
				{
					if (i%3==0)
					{
						cout << alfabet11[j];
					}

					if (i%3==1)
					{
						cout << alfabet12[j];
					}

					if (i%3==2)
					{
						cout << alfabet13[j];
					}
				}
			}
		}

		if ((i>=n)&&(i<n*2))
		{
			for (int j=0;j<strlen(alfabetOriginal);j++)
			{
				if (word[i]==alfabetOriginal[j])
				{
					if (i%3==0)
					{
						cout << alfabet21[j];
					}

					if (i%3==1)
					{
						cout << alfabet22[j];
					}

					if (i%3==2)
					{
						cout << alfabet23[j];
					}
				}
			}
		}

		if ((i>=2*n)&&(i<n*3))	
		{
			for (int j=0;j<strlen(alfabetOriginal);j++)
			{
				if (word[i]==alfabetOriginal[j])
				{
					if (i%3==0)
					{
						cout << alfabet31[j];
					}

					if (i%3==1)
					{
						cout << alfabet32[j];
					}

					if (i%3==2)
					{
						cout << alfabet33[j];
					}
				}
			}
		}
	}

	




	return 0;




}