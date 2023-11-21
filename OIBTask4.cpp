#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char alfabet [] = {"јаЅб¬в√гƒд≈е®Є∆ж«з»и…й кЋлћмЌнќоѕп–р—с“т”у‘ф’х÷ц„чЎшўщЏъџы№ьЁэёюя€ "};
	char word [200];
	char key [200];
	int wordIndex [200];
	int keyIndex [200];
	int b;

	cout << "¬ведите исходное сообщение: " << endl;
	gets(word);

	cout << "¬ведите ключевое слово (слово без повтор€ющихс€ символов: " << endl;
	gets(key);

	cout << "Ёта программа может зашифровывать (0) и расшифровывать (1) сообщение. ¬ыберите действие (0) или (1): " << endl;
	cin >> b;

	if ((b!=0)&&(b!=1))
	{
		cout << "–абота программы невозможна! ѕовторите попытку" << endl;
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

		cout << "«ашифрованное сообщение: " << endl;
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

		cout << "–асшифрованное сообщение: " << endl;
		for (int i=0;i<strlen(word);i++)
		{
			cout << alfabet[wordIndex[i]];
		}
	}

}