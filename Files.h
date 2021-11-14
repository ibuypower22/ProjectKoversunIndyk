#include "Functions.h"
#include "nlohmann/json.hpp"
#include <msclr\marshal_cppstd.h>
#include <codecvt>
#include <fstream>
using namespace std;
#pragma once
class Files
{
public:
	static void writetocsv(System::String^ potok, System::String^ text, int ping);
	static System::String^ readfromcsv(System::String^ potok);
	static void writetojson(System::String^ login, System::String^ name, System::String^ surname);
};