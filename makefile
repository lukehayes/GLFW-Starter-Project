CFLAGS = -Iinclude
LDFLAGS = -lglfw3 -lX11 -ldl -lpthread -lm
BIN = -o app


all:
	gcc main.c src/glad.c $(BIN) $(CFLAGS) $(LDFLAGS)
