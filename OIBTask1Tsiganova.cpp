#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	int n;
	char alfabet0 [] = {"јаЅб¬в√гƒд≈е®Є∆ж«з»и…й кЋлћмЌнќоѕп–р—с“т”у‘ф’х÷ц„чЎшўщЏъџы№ьЁэёюя€0123456789 .,?!"};
	char alfabet1 [200];
	char word [200];
	bool b;

	cout << "¬ведите исходное сообщение: " << endl;
	gets(word);
	cout << "Ёта программа может зашифровать и разшифровывать сообщени€ - что вы хотите сделать: зашифровать(0) или расшифровать(1):  " << endl;
	cin >> b;
	cout << "¬ведите ключ (число): " << endl;
	cin >> n;

	if (b==0)
	{
		cout << "«ашифрованное сообщение: " << endl;
		for (int i=0;i<strlen(alfabet0);i++)
		{
			alfabet1[i]=alfabet0[i+n];
		}

		for (int i=0;i<strlen(word);i++)
		{
			for (int j=0;j<strlen(alfabet0);j++)
			{
				if ((word[i]==alfabet0[j])&&((j+n)<(strlen(alfabet0)-1)))
				{
					cout << alfabet1[j];
				}

				if ((word[i]==alfabet0[j])&&((j+n)>(strlen(alfabet0)-1)))
				{
					cout << alfabet0[(j+n)%strlen(alfabet0)];
				}
			}
		}
	}

	if (b==1)
	{
		cout << "–асшифорованное сообщение: " << endl;
		for (int i=0;i<strlen(alfabet0);i++)
		{
			alfabet1[i]=alfabet0[i-n];
		}

		for (int i=0;i<strlen(word);i++)
		{
			for (int j=0;j<=strlen(alfabet0);j++)
			{

				if ((word[i]==alfabet0[j])&&((j-n)<strlen(alfabet0)-1))
				{
					cout << alfabet1[j];
				}
				
				if ((word[i]==alfabet0[j])&&((j-n)<0))
				{
					cout << alfabet0[strlen(alfabet0)-j];
				}
				
				
			}
		}


	}


	return 0;
}