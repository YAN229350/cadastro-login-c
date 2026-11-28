CC = gcc
CFLAGS = -Wall -Wextra -std=c11
ARQUIVOS = main.c
PROGRAMA = programa

all: $(PROGRAMA)

$(PROGRAMA): $(ARQUIVOS)
	$(CC) $(CFLAGS) $(ARQUIVOS) -o $(PROGRAMA)

clean:
	rm -f $(PROGRAMA)
