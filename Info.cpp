#include "Info.h"
#include <Windows.h>
#include <cmath>
using namespace Project1;
String^ Info::decrypt(String^ input)
{

    String^ messagestr = input;
    int n = messagestr->Length;
    wchar_t* messagechar = new wchar_t[n];

    for (int i = 0; i < n; i++)
    {
        messagechar[i] = Convert::ToChar(messagestr[i]);
    }

    wchar_t* crl = L"àáâãäå¸æçèéêëìíîïðñòóôõö÷øùúûüýþÿ´º³¿";
    wchar_t* CRL = L"ÀÁÂÃÄÅ¨ÆÇÈÉÊËÌÍÎÏÐÑÒÓÔÕÖ×ØÙÚÛÜÝÞß¥ª²¯";
    wchar_t* eng = L"abcdefghijklmnopqrstuvwxyz";
    wchar_t* ENG = L"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    wchar_t* numbers = L"0123456789";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 37; j++)
        {
            int iter = j - 5;
            if (messagechar[i] == crl[j])
            {
                messagechar[i] = crl[(iter+37) % 37];
                break;
            }
            if (messagechar[i] == CRL[j])
            {
                messagechar[i] = CRL[(iter+37) % 37];
                break;
            }
            if (messagechar[i] == eng[j])
            {
                messagechar[i] = eng[(iter+26) % 26];
                break;
            }
            if (messagechar[i] == ENG[j])
            {
                messagechar[i] = ENG[(iter+26) % 26];
                break;
            }
            if (messagechar[i] == numbers[j])
            {
                messagechar[i] = numbers[(iter+10) % 10];
                break;
            }

        }
    }
    String^ result = "";
    for (int i = 0; i < n; i++)
    {
        result += messagechar[i];
    }
    return result;
}