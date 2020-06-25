CC=gcc

main: main.c
	$(CC) -o main main.c

.PHONY: clean
clean:
	rm main
