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
	char alfabet0 [] = {"јаЅб¬в√гƒд≈е®Є∆ж«з»и…й кЋлћмЌнќоѕп–р—с“т”у‘ф’х÷ц„чЎшўщЏъџы№ьЁэёюя€0123456789 .,?!јаЅб¬в√гƒд≈е®Є∆ж«з»и…й кЋлћмЌнќоѕп–р—с“т”у‘ф’х÷ц„чЎшўщЏъџы№ьЁэёюя€0123456789 .,?"};
	char alfabet1 [200];
	char word [200];
	bool b;

	
	cout << "¬ведите сообщение: " << endl;
	gets(word);
	cout << "Ёто программа, реализующа€ шифрование и расшифрование методом одноалфавитной подстановки. ¬ы хотите зашифровать (0) или расшифровать (1) сообщение: " << endl;
	cin >> b;
	cout << "¬ведите ключ (любое натуральное число): " << endl;
	cin >> n;

	if (b==0)
	{
		for (int i=0;i<strlen(alfabet0);i++)
		{
			alfabet1[i]=alfabet0[i+n];
		}

		for (int i=0;i<strlen(word);i++)
		{
			for (int j=0;j<strlen(alfabet0);j++)
			{
				if (word[i]==alfabet0[j])
				{
					cout << alfabet1[j];
					break;
				}
			}
		}
	}

	if (b==1)
	{
		for (int i=0;i<strlen(alfabet0);i++)
		{
			alfabet1[i]=alfabet0[i+n];
		}

		for (int i=0;i<strlen(word);i++)
		{
			for (int j=0;j<strlen(alfabet1);j++)
			{
				if (word[i]==alfabet1[j])
				{
					cout << alfabet0[j];
					break;
				}
			}
		}
	}
	
	return 0;
}