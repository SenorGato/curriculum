#OBJS defines files to compile
OBJS = HTP.cpp 
CC = g++
COMPILER_FLAGS = -w
LINKER_FLAGS = 
OBJ_NAME = HTP 

all : $(OBJS) 
		$(CC) $(OBJS) $(COMPILER_FLAGS) $(LINKER_FLAGS) -o $(OBJ_NAME)
