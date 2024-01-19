#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include "display.h"


void init_TUI()
{
	initscr();
	getch();
	endwin();
}

void init_GUI()
{
	if (SDL_Init(SDL_INIT_VIDEO) != 0)
	{
		printf("error initializing SDL: %s\n", SDL_GetError());
		return;
	}

	printf("initialization successful!\n");

	SDL_Quit();
}
