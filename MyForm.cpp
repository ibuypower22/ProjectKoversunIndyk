#include "MyForm.h"
#include "Main.h"
#include <Windows.h>
using namespace Project1; 

int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MyForm);

	return 0;
}
void MyForm::writetofile(StreamWriter^ sw, String^ login, String^ name, String^ surname)
{
	sw->WriteLine("{" + "\n" + "\"Login\" : " + "\"" + login + "\"" + ", " + "\n" + "\"Name\" : " + "\"" + name + "\""+", "+"\n"+"\""+"Surname\" : " + "\"" + surname + "\""+", "+"\n" + "}"+"\n");
}