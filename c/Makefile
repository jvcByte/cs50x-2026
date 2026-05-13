CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11
LDLIBS = -lcs50

hello: hello.c
	$(CC) $(CFLAGS) hello.c -o hello $(LDLIBS)

agree: agree.c
	$(CC) $(CFLAGS) agree.c -o agree $(LDLIBS)

clean:
	rm -f hello
	rm -f agree

.PHONY: clean
