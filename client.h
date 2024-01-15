#ifndef CLIENT_H
#define CLIENT_H

struct target {
	char *hostname;
	char *port;
};

void *client_init(void *target_host);


#endif
