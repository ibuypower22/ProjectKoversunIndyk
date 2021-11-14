#include "Files.h"

void Files::writetocsv(System::String^ potok, System::String^ text, int ping)
{
	System::IO::FileStream^ f = gcnew System::IO::FileStream(potok, System::IO::FileMode::Append, System::IO::FileAccess::Write);
	System::IO::StreamWriter^ sw = gcnew System::IO::StreamWriter(f);
	sw->WriteLine(text + ";" + ping);
	sw->Close();
	f->Close();
}

System::String^ Files::readfromcsv(System::String^ potok)
{
	System::IO::StreamReader^ sr = gcnew System::IO::StreamReader(potok);
	bool doneReading = false;
	System::String^ res = "";
	while (doneReading == false)
	{
		System::String^ line = sr->ReadLine();
		if (line == nullptr)
		{
			doneReading = true;
			sr->Close();
			break;
		}

		cli::array<System::String^>^ decryption = line->Split(';');

		System::String^ check = Functions::decrypt(decryption[0]);
		res += (check + ";" + decryption[1]+System::Environment::NewLine);
		delete decryption;
	}
	return res;
}

void Files::writetojson(System::String^ login, System::String^ name, System::String^ surname)
{
	pin_ptr<const wchar_t> logintows = PtrToStringChars(login);
	pin_ptr<const wchar_t> nametows = PtrToStringChars(name);
	pin_ptr<const wchar_t> surnametows = PtrToStringChars(surname);

	wstring wlogin = logintows;
	wstring wname = nametows;
	wstring wsurname = surnametows;

	wstring_convert<codecvt_utf8_utf16<wchar_t>> convert1;
	string loginres = convert1.to_bytes(wlogin);

	wstring_convert<codecvt_utf8_utf16<wchar_t>> convert2;
	string nameres = convert2.to_bytes(wname);

	wstring_convert<codecvt_utf8_utf16<wchar_t>> convert3;
	string surnameres = convert3.to_bytes(wsurname);

	using json = nlohmann::json;
	json j;
	j["login"] = loginres;
	j["name"] = nameres;
	j["surname"] = surnameres;

	std::ofstream o("usershistory.json", ios::app);
	o << j << endl << endl;
	o.close();
}