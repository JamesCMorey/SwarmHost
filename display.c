#include <stdio.h>
#include <ncurses.h>
#include <stdlib.h>
#include "display.h"


void init_display()
{
	initscr();
	addstr("This is a test");
	refresh();

	addstr("\n Press any key to exit");
	refresh();

	getch();

	endwin();
}

void menu()
{
	int input;
	printf("1. Start Listening\n2. Send File\n3. Select Target\nChoice: ");
	scanf("%d", &input);

	switch (input) {
	case 1:
		puts("Starting Listener");
		break;
	case 2:
		puts("Sending File");
		break;
	case 3:
		puts("Select Target");
		break;
	default:
		puts("You must select an option from the given menu");
		break;
	}

	return;
}
