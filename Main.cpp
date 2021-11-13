#include "Main.h"
using namespace Project1;

void Main::writetofile(StreamWriter^ sw, String^ text, int ping)
{
	sw->WriteLine(text+";"+ping);
}