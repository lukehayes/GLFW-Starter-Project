CC      = gcc
CFLAGS  = -Iinclude
LDFLAGS = -lglfw3 -lX11 -ldl -lpthread -lm
BIN     = -o bin/app
ENTRY   = main.c
OBJ     = obj
OBJS    = $(OBJ)/glad.o $(OBJ)/Shader.o $(OBJ)/System.o

$(OBJ)/%.o: src/%.c
	$(CC) $(CFLAGS) -c $^ -o $@

all: $(OBJS)
	$(CC) $(ENTRY) $^ $(BIN) $(CFLAGS) $(LDFLAGS)

phony:
clean:
	rm -r bin/* obj/*.o
