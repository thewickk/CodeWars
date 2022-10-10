CC=gcc
CFLAGS=-g -Wall
TARGET=bin/sumarrays
SRC=src
INC=inc
OBJ=obj
SOURCES=$(wildcard $(SRC)/*.c)
OBJECTS=$(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SOURCES))

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

$(OBJ)/%.o: $(SRC)/%.c $(OBJ)
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

$(OBJ):
	mkdir $(OBJ)

clean:
	$(RM) -r $(TARGET) $(OBJ)