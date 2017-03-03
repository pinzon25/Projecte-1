#include <iostream>
#include "include/SDL.h"
#pragma comment( lib, "SDL/lib/x86/SDL2.lib")
#pragma comment( lib, "SDL/lib/x86/SDL2main.lib")
/*
SDL_Window* g_pWindow = 0;
SDL_Renderer* g_pRenderer = 0;
SDL_Rect rectangle;
int main(int argc, char* args[]) {
	
	SDL_Init(SDL_INIT_EVERYTHING);

	g_pWindow = SDL_CreateWindow("Chapter 1: Setting up SDL",
		SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED,640, 480,SDL_WINDOW_SHOWN);

	g_pRenderer = SDL_CreateRenderer(g_pWindow, -1, 0);

	SDL_SetRenderDrawColor(g_pRenderer, 255, 0, 0,255);

	SDL_RenderClear(g_pRenderer);
	rectangle.x = 50;
	rectangle.y = 50;
	rectangle.h = 50;
	rectangle.w = 50;
	

	SDL_RenderFillRect(g_pRenderer, &rectangle);

	SDL_RenderClear(g_pRenderer);

	SDL_RenderPresent(g_pRenderer);

	SDL_Delay(7000);

	SDL_Quit();

	return 0;
}
*/

SDL_Window* g_pWindow = 0;
SDL_Renderer* g_pRenderer = 0;
int main(int argc, char* args[]) {
	SDL_Rect rectangle;
	SDL_Init(SDL_INIT_EVERYTHING);
	g_pWindow = SDL_CreateWindow("Chapter 1", SDL_WINDOWPOS_CENTERED, SDL_WINDOWPOS_CENTERED, 640, 480, SDL_WINDOW_SHOWN);
	if (g_pWindow != 0) {
		g_pRenderer = SDL_CreateRenderer(g_pWindow, -1, 0);
	}
	else {
		return 1;
	}
	SDL_SetRenderDrawColor(g_pRenderer, 255, 0, 0, 255);
	SDL_RenderClear(g_pRenderer);
	rectangle.x = 50;
	rectangle.y = 50;
	rectangle.h = 50;
	rectangle.w = 50;
	SDL_SetRenderDrawColor(g_pRenderer, 0, 0, 255, 255);
	SDL_RenderFillRect(g_pRenderer, &rectangle);
	SDL_RenderPresent(g_pRenderer);
	SDL_Delay(5000);
	SDL_Quit();
	return EXIT_SUCCESS;
}