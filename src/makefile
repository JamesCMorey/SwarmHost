files := *.c

includes := -I../include -lSDL2 -lncurses

main:clean
		clang -Weverything -o a.out $(includes) $(files)
clean:
		rm -f a.out
