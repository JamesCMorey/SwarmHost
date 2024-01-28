#include <sys/types.h>
#include <stdlib.h>
#include "hash.h"

/*
 * This function takes in an existing hashtable and initialize it to default
 * values of length = 0 and capacity = whatever you pass to this function. It
 * also malloc's the hashtable.
 * PARAM: pointer to existing hashtable, capacity to be assigned to hashtable
 * RETURN: NONE
 * */
void init_hashtable(struct hashtable *ht, size_t capacity)
{
	ht = malloc(sizeof(struct hashtable));
	ht->length = 0;
	ht->capacity = capacity;
}

void add_entry(struct hashtable *ht, char *chunk)
{

}
