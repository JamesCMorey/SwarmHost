#ifndef FILE_H
#define FILE_H

#define CHUNKSIZE 4096
FILE *open_file(void);
void read_chunk(FILE *file, char *chunk);


#endif
