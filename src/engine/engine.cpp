/*
 * <one line to give the library's name and an idea of what it does.>
 * Copyright (C) 2013  Fabian Stock <AiwendilH@gmail.com>
 *
 * This library is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as
 * published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "engine.h"

#include <iostream>

Engine::Engine() : running(false)
{

}


Engine::~Engine()
{

}

void Engine::run()
{
  running = true;

  int i = 0;

  while (running)
  {
    i++;
    std::cout << "i: " << i << std::endl;
    if (i > 100)
    {
      running=false;
    }
  }
}
