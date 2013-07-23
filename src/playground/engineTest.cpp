/*
engineTest - just a bit of playing around and testing the BlackLilium Engine
Made 2013 by Fabian Stock <AiwendilH@gmail.com>

This program is released under the terms of the WTFPL. See
http://www.wtfpl.net/ for more details.
*/

// system headers
#include <iostream>
// BlackLilium deaders
#include "engine.h"

int main(int argc, char* argv[])
{
  std::cout << "Start" << std::endl;
  Engine eng;
  eng.run();
  std::cout << "End" << std::endl;
}