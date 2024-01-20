#ifndef CLIENT_H
#define CLIENT_H

struct target {
	char hostname[4096];
	char port[5];
};

void *init_client(void *target_host);


#endif
