files := main.c server.c client.c net.c thread.c display.c

main:clean
	gcc -o main -lncurses $(files)

clean:
	rm -f main
