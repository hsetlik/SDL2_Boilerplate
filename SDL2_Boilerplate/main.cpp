//
//  main.cpp
//  SDL2_Boilerplate
//
//  Created by Hayden Setlik on 2/23/21.
//
#include "Window.h"
AppWindow* window = nullptr;
const int wWidth = 1920;
const int wHeight = 1080;

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
