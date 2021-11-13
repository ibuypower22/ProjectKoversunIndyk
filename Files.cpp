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