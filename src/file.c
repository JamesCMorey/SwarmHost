#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "file.h"

/*
 * PARAM: NONE
 * RETURN: file handle or NULL if file was not found
 * */
FILE *open_file(void)
{
	char filename[20];

	puts("What is the name of your file?");

	fgets(filename, 20, stdin);
	filename[strcspn(filename, "\n")] = 0;

	return fopen(filename, "r");
}

/*
 * PARAM: file descriptor, char array
 * RETURN: NONE
 * */

/*
	FILE *file = open_file();
	if (file == NULL) {
		puts("Invalid filename...");
		return 1;
	}
	char chunk[CHUNKSIZE];

	//fread(chunk, sizeof(chunk[0]), CHUNKSIZE, file);

	//puts("Chunk read...");
	read_chunk(file, chunk);
	printf("%s", chunk);
 * */
void read_chunk(FILE *file, char *chunk)
{
	fread(chunk, sizeof(chunk[0]), CHUNKSIZE, file);
}
