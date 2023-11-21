#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char alfabet [] = {"�����������娸���������������������������������������������������� "};
	char word [200];
	char key [200];
	int wordIndex [200];
	int keyIndex [200];
	int b;

	cout << "������� �������� ���������: " << endl;
	gets(word);

	cout << "������� �������� ����� (����� ��� ������������� ��������: " << endl;
	gets(key);

	cout << "��� ��������� ����� ������������� (0) � �������������� (1) ���������. �������� �������� (0) ��� (1): " << endl;
	cin >> b;

	if ((b!=0)&&(b!=1))
	{
		cout << "������ ��������� ����������! ��������� �������" << endl;
		exit(0);
	}

	if (b==0)
	{
		for (int i=0;i<strlen(alfabet);i++)
		{
			for (int j=0;j<strlen(word);j++)
			{
				if (word[j]==alfabet[i])
				{
					wordIndex[j]=i;
				}				
			}
		}

		for (int i=0;i<strlen(alfabet);i++)
		{
			for (int j=0;j<strlen(key);j++)
			{
				if (key[j]==alfabet[i])
				{
					keyIndex[j]=i;
				}				
			}
		}
		
		for (int i=0;i<strlen(word);i++)
		{
			wordIndex[i] += keyIndex[i%strlen(key)];
		}
		
		for (int i=0;i<strlen(word);i++)
		{
			if (wordIndex[i]>=strlen(alfabet))
			{
				wordIndex[i]=wordIndex[i]-strlen(alfabet);
			}
		}

		cout << "������������� ���������: " << endl;
		for (int i=0;i<strlen(word);i++)
		{
			cout << alfabet[wordIndex[i]];
		}
	}

	if (b==1)
	{
		for (int i=0;i<strlen(alfabet);i++)
		{
			for (int j=0;j<strlen(word);j++)
			{
				if (word[j]==alfabet[i])
				{
					wordIndex[j]=i;
				}				
			}
		}

		for (int i=0;i<strlen(alfabet);i++)
		{
			for (int j=0;j<strlen(key);j++)
			{
				if (key[j]==alfabet[i])
				{
					keyIndex[j]=i;
				}				
			}
		}

		for (int i=0;i<strlen(word);i++)
		{
			wordIndex[i] = wordIndex[i] - keyIndex[i%strlen(key)];
		}
		
		for (int i=0;i<strlen(word);i++)
		{
			if (wordIndex[i]<0)
			{
				wordIndex[i]=wordIndex[i]+strlen(alfabet);
			}
		}

		cout << "�������������� ���������: " << endl;
		for (int i=0;i<strlen(word);i++)
		{
			cout << alfabet[wordIndex[i]];
		}
	}

}