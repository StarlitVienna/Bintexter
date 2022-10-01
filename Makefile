OBJS = *.cpp
CC = g++
COMPILER_FLAGS = -w
OBJ_NAME = main
all : $(OBJS)
	$(CC) $(OBJS) $(COMPILER_FLAGS) -o $(OBJ_NAME); ./main
