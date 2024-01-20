#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include <SDL2/SDL.h>
#include "control.h"
#include "client.h"
#include "server.h"
#include "net.h"

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

void init_menu()
{
	char input;

	while (1) {
		puts("What would you like to do?\nq)uit c)onnect s)end r)eceive");
		input = getchar();

		// deal with and display input
		if (input == '\n')
			continue;
		printf("input: %c\n", input);

		// clear buffer
		while (getchar() != '\n')
			;

		// decision tree
		switch (input) {
		case 'c':
			get_target();
			break;
		case 's':
			puts("What file would you like to send?");
			break;
		case 'r':
			puts("Activating listener...");
			init_server();
			break;
		case 'q':
			return;
		}

	}
}

void get_target()
{
	struct target *info = malloc(sizeof(struct target));
	//info->hostname = malloc(sizeof(char) * 4096);
	//info->port = malloc(sizeof(char) * 5);

	printf("Enter the target's ip: ");
	fgets(info->hostname, 4096, stdin);
	// remove newline
	(info->hostname)[strcspn(info->hostname, "\n")] = 0;

	printf("Enter the target's port: ");
	fgets(info->port, 6, stdin);
	info->hostname[strcspn(info->hostname, "\n")] = 0;

	// remove leftovers from stdin
	while (getchar() != '\n')
		;

	init_client(info);
}

