CC = clang

logging: logging.c log.c log.h
	$(CC) -Weverything -fsanitize=memory -o logging logging.c log.c



clean:
	rm -f logging
