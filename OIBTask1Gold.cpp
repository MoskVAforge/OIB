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
	char word [200];
	bool b;


	cout << "¬ведите исходное сообщение: " << endl;
	gets(word);
	cout << "Ёта программа может зашифровывать и расшифровывать сообщени€ - что вы хотите сделать: зашифровать(0) или расшифровать(1):  " << endl;
	cin >> b;
	cout << "¬ведите ключ (число): " << endl;
	cin >> n;
	if (b==0)
	{
		cout << "«ашифрованное сообщение: " << endl;
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
		cout << "–асшифорованное сообщение: " << endl;
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