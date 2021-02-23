//
//  main.cpp
//  SDL2_Boilerplate
//
//  Created by Hayden Setlik on 2/23/21.
//  Probably don't change stuff in here. Xcode and SDL2 have a very strained relationship.
#include "Window.h"
AppWindow* window = nullptr;

int main(int argc, const char * argv[])
{
    window = new AppWindow("SDL Window", 600, 600, wWidth, wHeight, false);
    while(window->running())
    {
        window->handleEvents();
        window->update();
        window->render();
    }
    window->clean();
    return 0;
}
