files := src/*.c

includes := -Iinclude -lSDL2 -lncurses

main:clean
		clang -Weverything -o a.out $(includes) $(files)
clean:
		rm -f a.out
