CC=gcc
CFLAGS=-g -Wall
SRC=src
OBJ=obj
INC=inc
SOURCES=$(wildcard $(SRC)/*.c)
OBJECTS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SOURCES))
BIN=bin/squarded

all:$(BIN)

$(BIN): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

$(OBJ)/%.o: $(SRC)/%.c $(OBJ)
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

$(OBJ):
	mkdir $(OBJ)

clean:
	$(RM) -r $(BIN) $(OBJ)

