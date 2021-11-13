#include "Functions.h"
wchar_t* crl = L"абвгдеёжзийклмнопрстуфхцчшщъыьэюяґєії'";
wchar_t* CRL = L"АБВГДЕЁЖЗИЙКЛМНОПРСТУФХЦЧШЩЪЫЬЭЮЯҐЄІЇ'";
wchar_t* eng = L"abcdefghijklmnopqrstuvwxyz";
wchar_t* ENG = L"ABCDEFGHIJKLMNOPQRSTUVWXYZ";
wchar_t* numbers = L"0123456789";

System::String^ Functions::encrypt(System::String^ input)
{
    System::String^ messagestr = input;
    int n = messagestr->Length;
    wchar_t* messagechar = new wchar_t[n];

    for (int i = 0; i < n; i++)
    {
        messagechar[i] = System::Convert::ToChar(messagestr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 38; j++)
        {
            int iter = j + 5;
            if (messagechar[i] == crl[j])
            {
                messagechar[i] = crl[iter % 38];
                break;
            }
            if (messagechar[i] == CRL[j])
            {
                messagechar[i] = CRL[iter % 38];
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
    System::String^ result = "";
    for (int i = 0; i < n; i++)
    {
        result += messagechar[i];
    }
    return result;

}

System::String^ Functions::decrypt(System::String^ input)
{
    System::String^ messagestr = input;
    int n = messagestr->Length;
    wchar_t* messagechar = new wchar_t[n];
    
    for (int i = 0; i < n; i++)
    {
        messagechar[i] = System::Convert::ToChar(messagestr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 38; j++)
        {
            int iter = j - 5;
            if (messagechar[i] == crl[j])
            {
                messagechar[i] = crl[(iter + 38) % 38];
                break;
            }
            if (messagechar[i] == CRL[j])
            {
                messagechar[i] = CRL[(iter + 38) % 38];
                break;
            }
            if (messagechar[i] == eng[j])
            {
                messagechar[i] = eng[(iter + 26) % 26];
                break;
            }
            if (messagechar[i] == ENG[j])
            {
                messagechar[i] = ENG[(iter + 26) % 26];
                break;
            }
            if (messagechar[i] == numbers[j])
            {
                messagechar[i] = numbers[(iter + 10) % 10];
                break;
            }

        }
    }
    System::String^ result = "";
    for (int i = 0; i < n; i++)
    {
        result += messagechar[i];
    }
    return result;
}


bool Functions::validation(System::String^ login, System::String^ name, System::String^ surname)
{
    int k = login->Length;
    int n = name->Length;
    int m = surname->Length;

    wchar_t* loginchar = new wchar_t[k];
    wchar_t* namechar = new wchar_t[n];
    wchar_t* surnamechar = new wchar_t[m];

    for (int i = 0; i < k; i++)
    {
        loginchar[i] = System::Convert::ToChar(login[i]);
    }

    for (int i = 0; i < n; i++)
    {
        namechar[i] = System::Convert::ToChar(name[i]);
    }
    for (int i = 0; i < m; i++)
    {
        surnamechar[i] = System::Convert::ToChar(surname[i]);
    }

    bool check = false;
    
    
    try {
            for (int i = 0; i < k; i++)
            {
                bool logincheck = false;

                for (int j = 0; j < 26; j++)
                {

                    if (loginchar[i] == eng[j] || loginchar[i] == ENG[j])
                    {
                        logincheck = true;
                    }

                }
                if (logincheck == false)
                {
                    check = true;
                }
            }

            for (int i = 0; i < n; i++)
            {
                bool namecheck = false;

                for (int j = 0; j < 38; j++)
                {

                    if (namechar[i] == crl[j] || namechar[i] == CRL[j])
                    {
                        namecheck = true;
                    }

                }
                if (namecheck == false)
                {
                    check = true;
                }
            }

            for (int i = 0; i < m; i++)
            {
                bool surnamecheck = false;

                for (int j = 0; j < 38; j++)
                {

                    if (surnamechar[i] == crl[j] || surnamechar[i] == CRL[j])
                    {
                        surnamecheck = true;
                    }

                }
                if (surnamecheck == false)
                {
                    check = true;
                }
            }
        }
    catch (...) {}
    return check;
}

int Functions::latency(System::String^ message)
{
    if (message->Length == 0) { return 10; }
    else
    {
        int len = message->Length;
        int res = 10 + len * 3;
        return res;
    }
}

System::String^ Functions::avglatency(System::String^ text)
{
    cli::array<System::String^>^ sentences = text->Split(';', '\n');
    int counter = 0;
    int allpings = 0;
    for (int i = 3; i < sentences->Length; i += 2)
    {
        counter++;
        System::String^ temp = sentences[i];
        allpings = allpings + System::Int32::Parse(temp);
    }
    if (counter == 0) { throw Exceptions(7); return "err"; }
    else
    {
        System::String^ res = (round(allpings / counter)).ToString();
        return res;
    }
}

void Functions::search(System::IO::StreamReader^ sr, System::String^ text, System::String^ searchtext)
{
    int k = 0;
    System::String^ tempsentence;
    System::String^ tempping;
    bool flag = false;
    bool doneReading = false;
    while (doneReading == false)
    {
        System::String^ line = sr->ReadLine();
        if (line == nullptr)
        {
            doneReading = true;
            sr->Close();
            break;
        }
        cli::array<System::String^>^ sentences = line->Split(';', '\n');

        if (searchtext == Functions::decrypt(sentences[0]))
        {
            k++;
            tempsentence = sentences[0];
            tempping = sentences[1];
            flag = true;
        }
        delete sentences;
    }
    if (flag == false) System::Windows::Forms::MessageBox::Show("Повідомлення не знайдено :(");  else
        System::Windows::Forms::MessageBox::Show("Повідомлення знайдено: " + Functions::decrypt(tempsentence) + ", його затримка: " + tempping + ", усього таких повідомлень: " + k);
}

cli::array<System::String^>^ Functions::downsort(System::String^ text)
{
    cli::array<System::String^>^ sentences = text->Split(';', '\n');
    int max = 0;
    for (int j = 3; j < sentences->Length - 2; j += 2)
        for (int i = 3; i < sentences->Length - 2; i += 2)
        {
            int tmp1 = System::Convert::ToInt32(sentences[i]);
            int tmp2 = System::Convert::ToInt32(sentences[i + 2]);
            if (tmp2 > tmp1)
            {
                int tmp3 = tmp2;
                tmp2 = tmp1;
                tmp1 = tmp3;
                System::String^ tmpstring;
                sentences[i] = System::Convert::ToString(tmp3);
                sentences[i + 2] = System::Convert::ToString(tmp2);
                tmpstring = sentences[i - 1];
                sentences[i - 1] = sentences[i + 1];
                sentences[i + 1] = tmpstring;
            }
        }
    return sentences;
}

cli::array<System::String^>^ Functions::upsort(System::String^ text)
{
    cli::array<System::String^>^ sentences = text->Split(';', '\n');
    int max = 0;
    for (int j = 3; j < sentences->Length - 2; j += 2)
        for (int i = 3; i < sentences->Length - 2; i += 2)
        {
            int tmp1 = System::Convert::ToInt32(sentences[i]);
            int tmp2 = System::Convert::ToInt32(sentences[i + 2]);
            if (tmp2 < tmp1)
            {
                int tmp3 = tmp2;
                tmp2 = tmp1;
                tmp1 = tmp3;
                System::String^ tmpstring;
                sentences[i] = System::Convert::ToString(tmp3);
                sentences[i + 2] = System::Convert::ToString(tmp2);
                tmpstring = sentences[i - 1];
                sentences[i - 1] = sentences[i + 1];
                sentences[i + 1] = tmpstring;
            }
        }
    return sentences;
}