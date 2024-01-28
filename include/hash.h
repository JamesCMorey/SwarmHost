#ifndef HASH_H
#define HASH_H

struct ht_entry {
	size_t key;
	void *data;
};

struct hashtable {
	struct ht_entry* entries;
	size_t capacity; // potential size
	size_t length; // actual size
};

void init_hashtable(struct hashtable *ht, size_t capacity);
void add_entry(struct hashtable *ht, char *chunk);

#endif
