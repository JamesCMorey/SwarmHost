files := main.c server.c client.c net.c thread.c control.c

includes := -lncurses -I/opt/homebrew/include -L/opt/homebrew/lib -lSDL2

main:clean
	clang -o a.out $(includes) $(files)

clean:
	rm -f a.out
