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
    char gamma [200];
    int alfabetIndex [200];
    int wordIndex [200];
    int gammaIndex [200];
    bool b;

    cout << "������� �������� ���������: " << endl;
    gets(word);
    cout << "������� �����: " << endl;
    gets(gamma);
    cout << "��������� ����� ������������� (0) � �������������� (1) ���������. �������� ��������: (0) ��� (1)" << endl;
    cin >> b;

    for (int i=0;i<strlen(alfabet);i++)
    {
        alfabetIndex[i]=i+1;
    }

    for (int i=0;i<strlen(word);i++)
    {
        for (int j=0;j<strlen(alfabet);j++)
        {
            if (word[i]==alfabet[j])
            {
                wordIndex[i]=alfabetIndex[j];
            }
        }
    }

    for (int i=0;i<strlen(gamma);i++)
    {
        for (int j=0;j<strlen(alfabet);j++)
        {
            if (gamma[i]==alfabet[j])
            {
                gammaIndex[i]=alfabetIndex[j];
            }
        }
    }

    if (b==0)
    {
        for (int i=0;i<strlen(word);i++)
        {
            wordIndex[i] = (wordIndex[i] + gammaIndex[i%strlen(gamma)])%strlen(alfabet);
        }

        cout << "������������� ���������: " << endl;

        for (int i=0;i<strlen(word);i++)
        {
            cout << alfabet[wordIndex[i]-1];
        }
    }

    if (b==1)
    {
        for (int i=0;i<strlen(word);i++)
        {
            wordIndex[i] = wordIndex[i] - gammaIndex[i%strlen(gamma)];
            if (wordIndex[i]<1)
            {
                wordIndex[i]=strlen(alfabet) + wordIndex[i];
            }   
        }

        cout << "�������������� ���������: " << endl;
        for (int i=0;i<strlen(word);i++)
        {
            cout << alfabet[wordIndex[i]-1];
        }
    }

    return 0;
}