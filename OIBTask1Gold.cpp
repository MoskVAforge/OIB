#include <iostream>
#include <cstring>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	char alfabet0 [] = {"�����������娸����������������������������������������������������0123456789 .,?!�����������娸����������������������������������������������������0123456789 .,?"};
	char word [200];
	bool b;


	cout << "������� �������� ���������: " << endl;
	gets(word);
	cout << "��� ��������� ����� ������������� � �������������� ��������� - ��� �� ������ �������: �����������(0) ��� ������������(1):  " << endl;
	cin >> b;
	cout << "������� ���� (�����): " << endl;
	cin >> n;
	if (b==0)
	{
		cout << "������������� ���������: " << endl;
		for (int i=0;i<strlen(word);i++)
		{
			for (int j=0;j<strlen(alfabet0);j++)
			{
				if (word[i]==alfabet0[j])
				{
					cout << alfabet0[j+n];
					break;
				}
			}
		}
	}

	if (b==1)
	{
		cout << "��������������� ���������: " << endl;
		for (int i=0;i<strlen(word);i++)
		{
			for (int j=0;j<strlen(alfabet0);j++)
			{
				if ((word[i]==alfabet0[j])&&((j-n)<0))
				{
					continue;
				}

				if (word[i]==alfabet0[j])
				{
					cout << alfabet0[j-n];
					break;
				}
			}
		}
	}

	return 0;
}