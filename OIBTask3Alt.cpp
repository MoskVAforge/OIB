#include <iostream>
#include <string.h>
#include <windows.h>

using namespace std;

int main()
{

	setlocale(LC_ALL, "ru");
	SetConsoleCP(1251);	
	SetConsoleOutputCP(1251);

	char alfabetOriginal [] = {"ÀàÁáÂâÃãÄäÅå¨¸ÆæÇçÈèÉéÊêËëÌìÍíÎîÏïÐðÑñÒòÓóÔôÕõÖö×÷ØøÙùÚúÛûÜüÝýÞþßÿ0123456789., ?!"};
	char alfabet11 [] = {",ü÷ÑÖÆòÃêùÜÛöÒîÏÝØûõ0ÿéàÍø ôÀ23Ó6¸ÚåñÈ×ëäþÄúí8ý19æÂ4ÁÅ.ïâÎßðÉÐÌÊÕÞè?Çó!ìÙ5ã¨áç7ÔË"};
	char alfabet12 [] = {"÷æëÙÈ?öÉðãÑ0ÒáÖÛÓî ×8õ2úäèÕ!Üü6ÍÅÂíêù5Æÿ¸.4ÎñØàìÐßÀøÄÝÃåÌËó,ûçÁòôÔéÊþ¨7ýÞ39ÇÏ1ïÚâ"};
	char alfabet13 [] = {"óå7ãñÊÄéæ9Á1ëÅ×Í÷8Ùß3âÆÚáý¸ËìîÜúèÿÕôÓÖÏõÛÎþ4À Ñ¨üÝðä2êÔÃû,Øç!àÐí05òÈÞ.ø6Òïùö?ÉÂÌÇ"};
	
	char alfabet21 [] = {"ñ0!âÛ,2ÍéÄ¨çÀÝÜê41þû¸Ø.Þ×ÉóÆ6 8ïë?Ë3ÕåßÔ9ÏÌ5äÊÓìôÐùÁí7õÚãüøÂîðýÃÈÅÒúÇò÷èöÖÑÙáÿæÎà"};
	char alfabet22 [] = {"ãýÁëÿÒâçÞ5ÕÆÄØÉ.ïÏòìÔ1×õ¨Çû2øÅ÷Â7éÈáðíà49ÃÍ?6ÓÜôúÐèê!À,Ûß8æÚåñóÝöÌùîÖÎü ä0ÊÙ3Ë¸Ñþ"};
	char alfabet23 [] = {"9É.ÖàÚèÇðÒóÑÌ×Èæ÷ÂÕ!ÝÜøêîéï0 ä2ÆúÅÐ6Û1Î4ËÍõÞñâã,ÏáÁûç3ìÊØÙÔöþü5ëýôùÓß¨ÿÃåí8¸?òÄÀ7"};

	char alfabet31 [] = {"óÂÔÄòÇïÓÏöìÒêÞÖÊ8äâÈ?ßÅúÜÁù ÍëËÉî39ÌãðçÕàÃé!0Îûþ.,è7×í¸5Ðá2åõÆÀ1ýüæø6Ñô4¨ØÿÙÚñÛ÷Ý"};
	char alfabet32 [] = {"æÍÉýÁÀ×Òú7ÕûëÞÇå65ôÊä÷ÆËéØâöïÅÔÖ3êÎÃÙá¨84ÜÛ!?þÓíÚßóÂ,èÐÌ ìñãø0îüðÝ192ÑÈ.¸òùàÄÏçõÿ"};
	char alfabet33 [] = {"Ë28Óóì3ÁïÐÄÎ¨ê÷õÀù6¸Â!úÃøÚòë,á9ÛÇýÙçßÌÖé7ðÆû?ÈÒ1ÊãÝäÔîþ ñÜ0Þö4íÅàÍÏÿÕôüâèå.É5Ñ×Øæ"};
	
	char word [200];
	bool b;
	int n;

	gets(word);
	cin >> n;
	cin >> b;

	if (n>strlen(word))
	{
		exit(0);
	}

	if (b==0)
	{
		for (int i=0;i<strlen(word);i++)
		{
			if (i/n%n==0)
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

			if ((i/n%n==1)&&(n-3==0))
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

			if ((i/n%n==1)&&(n-3==1))
			{
				for (int j=0;j<strlen(alfabetOriginal);j++)
				{
					if (word[i]==alfabetOriginal[j])
					{
						if ((i-1)%3==0)
						{
							cout << alfabet21[j];
						}

						if ((i-1)%3==1)
						{
							cout << alfabet22[j];
						}

						if ((i-1)%3==2)
						{
							cout << alfabet23[j];
						}
					}
				}
			}

			if ((i/n%n==1)&&(n-3==2))
			{
				for (int j=0;j<strlen(alfabetOriginal);j++)
				{
					if (word[i]==alfabetOriginal[j])
					{
						if ((i-2)%3==0)
						{
							cout << alfabet21[j];
						}

						if ((i-2)%3==1)
						{
							cout << alfabet22[j];
						}

						if ((i-2)%3==2)
						{
							cout << alfabet23[j];
						}
					}
				}
			}

			if ((i/n%n==2)&&(n-3==0))
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

			if ((i/n%n==2)&&(n-3==1))
			{
				for (int j=0;j<strlen(alfabetOriginal);j++)
				{
					if (word[i]==alfabetOriginal[j])
					{
						if ((i-2)%3==0)
						{
							cout << alfabet31[j];
						}

						if ((i-2)%3==1)
						{
							cout << alfabet32[j];
						}

						if ((i-2)%3==2)
						{
							cout << alfabet33[j];
						}
					}
				}
			}
			if ((i/n%n==2)&&(n-3==2))
			{
				for (int j=0;j<strlen(alfabetOriginal);j++)
				{
					if (word[i]==alfabetOriginal[j])
					{
						if ((i-1)%3==0)
						{
							cout << alfabet31[j];
						}

						if ((i-1)%3==1)
						{
							cout << alfabet32[j];
						}

						if ((i-1)%3==2)
						{
							cout << alfabet33[j];
						}
					}
				}
			}
		}
	}

	if (b==1)
	{
		for (int i=0;i<strlen(word);i++)
		{
			if (i/n%n==0)
			{
				if (i%3==0)
				{
					for (int j=0;j<strlen(alfabet11);j++)
					{
						if (word[i]==alfabet11[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}

				if (i%3==1)
				{
					for (int j=0;j<strlen(alfabet12);j++)
					{
						if (word[i]==alfabet12[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}

				if (i%3==2)
				{
					for (int j=0;j<strlen(alfabet13);j++)
					{
						if (word[i]==alfabet13[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}
			}

			if ((i/n%n==1)&&(n-3==0))
			{
				if (i%3==0)
				{
					for (int j=0;j<strlen(alfabet21);j++)
					{
						if (word[i]==alfabet21[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}

				if (i%3==1)
				{
					for (int j=0;j<strlen(alfabet22);j++)
					{
						if (word[i]==alfabet22[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}

				if (i%3==2)
				{
					for (int j=0;j<strlen(alfabet23);j++)
					{
						if (word[i]==alfabet23[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}
			}

			if ((i/n%n==1)&&(n-3==1))
			{
				if ((i-1)%3==0)
				{
					for (int j=0;j<strlen(alfabet21);j++)
					{
						if (word[i]==alfabet21[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}

				if ((i-1)%3==1)
				{
					for (int j=0;j<strlen(alfabet22);j++)
					{
						if (word[i]==alfabet22[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}

				if ((i-1)%3==2)
				{
					for (int j=0;j<strlen(alfabet23);j++)
					{
						if (word[i]==alfabet23[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}
			}

			if ((i/n%n==1)&&(n-3==2))
			{
				if ((i-2)%3==0)
				{
					for (int j=0;j<strlen(alfabet21);j++)
					{
						if (word[i]==alfabet21[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}

				if ((i-2)%3==1)
				{
					for (int j=0;j<strlen(alfabet22);j++)
					{
						if (word[i]==alfabet22[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}

				if ((i-2)%3==2)
				{
					for (int j=0;j<strlen(alfabet23);j++)
					{
						if (word[i]==alfabet23[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}
			}

			if ((i/n%n==2)&&(n-3==0))
			{
				if (i%3==0)
				{
					for (int j=0;j<strlen(alfabet31);j++)
					{
						if (word[i]==alfabet31[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}

				if (i%3==1)
				{
					for (int j=0;j<strlen(alfabet32);j++)
					{
						if (word[i]==alfabet32[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}

				if (i%3==2)
				{
					for (int j=0;j<strlen(alfabet33);j++)
					{
						if (word[i]==alfabet33[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}
			}

			if ((i/n%n==2)&&(n-3==1))
			{
				if ((i-2)%3==0)
				{
					for (int j=0;j<strlen(alfabet31);j++)
					{
						if (word[i]==alfabet31[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}

				if ((i-2)%3==1)
				{
					for (int j=0;j<strlen(alfabet32);j++)
					{
						if (word[i]==alfabet32[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}

				if ((i-2)%3==2)
				{
					for (int j=0;j<strlen(alfabet33);j++)
					{
						if (word[i]==alfabet33[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}
			}

			if ((i/n%n==2)&&(n-3==2))
			{
				if ((i-1)%3==0)
				{
					for (int j=0;j<strlen(alfabet31);j++)
					{
						if (word[i]==alfabet31[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}

				if ((i-1)%3==1)
				{
					for (int j=0;j<strlen(alfabet32);j++)
					{
						if (word[i]==alfabet32[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}

				if ((i-1)%3==2)
				{
					for (int j=0;j<strlen(alfabet33);j++)
					{
						if (word[i]==alfabet33[j])
						{
							cout << alfabetOriginal[j];
						}
					}
				}
			}
		}
	}


	return 0;

}




