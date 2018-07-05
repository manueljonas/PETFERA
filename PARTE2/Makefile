INC_DIR = include
SRC_DIR = src
OBJ_DIR = build
LIB_DIR = lib
BIN_DIR = bin

CC = g++
CFLAGS = -Wall -pedantic -std=c++11 -I. -I$(INC_DIR)
AR = ar


petfera_dinamic.exe:
	#sudo mv $(HOME)/PETFERA/lib/petfera.so /usr/lib
	#sudo ldconfig
	#ldconfig -p | grep petfera
	$(CC) $(CFLAGS) $(SRC_DIR)/main.cpp $(LIB_DIR)/petfera.so -o $(BIN_DIR)/$@
	@echo "+++[CRIADO EXCUTAVEL DINAMIC EM $(BIN_DIR)/$@]+++"
