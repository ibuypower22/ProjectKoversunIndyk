#include "Main.h"
#include <Windows.h>
#include <vector>
using namespace Project1;

int Main::latency(TextBox^ textBox)
{
	if (textBox->TextLength == 0) { return 10; }
	else 
	{
		int len = textBox->TextLength;
		int res = 10 + len * 2;
		return res;
    }
}
void Main::writetofile(StreamWriter^ sw, String^ text, int ping)
{
	sw->WriteLine(text+";"+ping);
}

String^ Main::encrypt(String^ input)
{

    String^ messagestr = input;
    int n = messagestr->Length;
    wchar_t* messagechar = new wchar_t[n];

    for (int i = 0; i < n; i++)
    {
        messagechar[i] = Convert::ToChar(messagestr[i]);
    }

    wchar_t* rus = L"��������������������������������";
    wchar_t* RUS = L"�����Ũ��������������������������";
    wchar_t* eng = L"abcdefghijklmnopqrstuvwxyz";
    wchar_t* ENG = L"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    wchar_t* numbers = L"0123456789";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 33; j++)
        {
            int iter = j + 5;
            if (messagechar[i] == rus[j])
            {
                messagechar[i] = rus[iter %33];
                break;
            }
            if (messagechar[i] == RUS[j])
            {
                messagechar[i] = RUS[iter %33];
                break;
            }
            if (messagechar[i] == eng[j])
            {
                messagechar[i] = eng[iter % 26];
                break;
            }
            if (messagechar[i] == ENG[j])
            {
                messagechar[i] = ENG[iter % 26];
                break;
            }
            if (messagechar[i] == numbers[j])
            {
                messagechar[i] = numbers[iter % 10];
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