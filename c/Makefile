CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11
LDLIBS = -lcs50

hello: hello.c
	$(CC) $(CFLAGS) hello.c -o hello $(LDLIBS)

agree: agree.c
	$(CC) $(CFLAGS) agree.c -o agree $(LDLIBS)

cat: cat.c
	$(CC) $(CFLAGS) cat.c -o cat $(LDLIBS)

clean:
	rm -f hello mario agree cat calculator overflow

.PHONY: clean
