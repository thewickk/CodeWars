CC=g++
CFLAGS=-g -Wall -Wextra
SRC=src
INC=inc
OBJ=obj
SOURCES=$(wildcard $(SRC)/*.cpp)
OBJECTS=$(patsubst $(SRC)/%.cpp, $(OBJ)/%.o, $(SOURCES))
TARGET=bin/sumofpositive

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) $(OBJECTS) -o $@

$(OBJ)/%.o: $(SRC)/%.cpp $(OBJ)
	$(CC) $(CFLAGS) -I $(INC) -c $< -o $@

$(OBJ):
	mkdir $(OBJ)

clean:
	$(RM) -r $(TARGET) $(OBJ)