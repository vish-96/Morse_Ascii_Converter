CC=gcc
CFLAG = -std=c99 -Wall
all:
	cd src/; \
	$(CC) $(CFLAG) ascii_morse.c -o ascii_morse; \
	$(CC) $(CFLAG) morse_ascii.c -o morse_ascii; \
	mv ascii_morse morse_ascii ../bin/
