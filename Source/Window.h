//
//  Window.h
//  SDL2_Boilerplate
//
//  Created by Hayden Setlik on 2/23/21.
//

#ifndef Window_h
#define Window_h
#pragma once
#include <SDL2/SDL.h>
#include <SDL2/SDL_image.h>
#include <stdio.h>
#include <iostream>
//adjust window size here
const int wWidth = 1920;
const int wHeight = 1080;

class AppWindow
{
public:
    AppWindow(const char* title, int xpos, int ypos, int width, int height, bool fullscreen);
    ~AppWindow() {}
    void handleEvents();
    void update();
    void render();
    void clean();
    bool running() {return isRunning;}
private:
    bool isRunning;
    SDL_Window* window;
    SDL_Renderer* renderer;
};
#endif /* Window_h */
