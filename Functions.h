#include <iostream>
#include "Exceptions.h"
#pragma once
class Functions
{
public:
	static System::String^ encrypt(System::String^ input);
    static System::String^ decrypt(System::String^ input);
    static bool validation(System::String^ login, System::String^ name, System::String^ surname);
    static int latency(System::String^ message);
    static System::String^ avglatency(System::String^ text);
    static void search(System::String^ potok, System::String^ text, System::String^ searchtext);
    static cli::array<System::String^>^ downsort(System::String^ text);
    static cli::array<System::String^>^ upsort(System::String^ text);
};

