#OBJS defines files to compile
OBJS = main.cpp 
CC = g++
COMPILER_FLAGS = -w
LINKER_FLAGS = 
OBJ_NAME = font

all : $(OBJS) 
		$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
