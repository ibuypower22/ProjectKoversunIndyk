#include "Functions.h"
#pragma once
class Files
{
public:
	static void writetocsv(System::String^ potok, System::String^ text, int ping);
	static System::String^ readfromcsv(System::String^ potok);
};

