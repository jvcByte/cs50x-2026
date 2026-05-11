CC = gcc
CFLAGS = -Wall -Wextra -Werror -std=c11
LDLIBS = -lcs50

hello: hello.c
	$(CC) $(CFLAGS) hello.c -o hello $(LDLIBS)

clean:
	rm -f hello

.PHONY: clean
