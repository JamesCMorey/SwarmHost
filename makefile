files := main.c server.c client.c net.c thread.c display.c

main:clean
	gcc -o a.out -lncurses $(files)

clean:
	rm -f a.out
