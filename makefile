
#PRJ_DIR=~/rnd/xcodeApps/gitRepos/practice_code
PRJ_DIR=~/rnd/cpp/practice_code
SRC=$(PRJ_DIR)/src
INC_DIR=$(PRJ_DIR)/include
OBJ_DIR=$(PRJ_DIR)/obj


CC=g++
CFLAGS = -g -I $(INC_DIR)
LD_FLAGS =

_OBJ = main.o testLinkedList.o modules.o linkedList.o

$(OBJ_DIR)/%.o:	$(SRC)/%.cpp
	$(CC) -c -o $@ $< $(CFLAGS)

OBJ=$(patsubst %, $(OBJ_DIR)/%, $(_OBJ))

dsTestApp:	$(OBJ)
		$(CC) -o $@ $^ 

.PHONY: clean

clean:
	rm -f $(OBJ_DIR)/*.o
	rm -f dsTestApp