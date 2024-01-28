#include <sys/types.h>
#include <sys/socket.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include "net.h"
#include "server.h"
#include "thread.h"

#define BACKLOG 10

void *init_server(void)
{
	int listener, client;
	char buffer[BUFFERSIZE];

	listener = get_server_socket(PORT);

	if (listen(listener, BACKLOG) == -1) {
		perror("listener");
		return (void *) -1;
	}

	client = accept(listener, NULL, NULL);

	puts("new connection");
	recv(client, buffer, sizeof buffer, 0);

	printf("Message received: %s\n", buffer);

	close(client);
	close(listener);

	return 0;
}