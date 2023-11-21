#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

int main()
{
	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	char alfabetOriginal [] = {"јаЅб¬в√гƒд≈е®Є∆ж«з»и…й кЋлћмЌнќоѕп–р—с“т”у‘ф’х÷ц„чЎшўщЏъџы№ьЁэёюя€0123456789., ?!"};
	char alfabet1 [] = {",ьч—÷∆т√кщ№џц“оѕЁЎых0€йаЌш фј23”6ЄЏес»„лдюƒън8э19ж¬4Ѕ≈.пвќяр…–ћ ’ёи?«у!мў5г®бз7‘Ћ"};
	char alfabet2 [] = {"чжлў»?ц…рг—0“б÷џ”о „8х2ъди’!№ь6Ќ≈¬нкщ5∆€Є.4ќсЎам–яјшƒЁ√ећЋу,ызЅтф‘й ю®7эё39«ѕ1пЏв"};
	char alfabet3 [] = {"уе7гс ƒйж9Ѕ1л≈„Ќч8ўя3в∆ЏбэЄЋмо№ъи€’ф”÷ѕхџќю4ј —®ьЁрд2к‘√ы,Ўз!а–н05т»ё.ш6“пщц?…¬ћ«"};
	char word [200];
	bool b;

	cout << "¬ведите исходное сообщение: " << endl;
	gets(word);
	cout << "Ёта программа может зашифровывать (0) и расшифровывать (1) сообщение. ¬ыберите действие (0) или (1): " << endl;
	cin >> b;							

	
	if (b==0)
	{
		cout << "«ашифрованное сообщение: " << endl;
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
		cout << "–асшифрованное сообщение: " << endl;
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