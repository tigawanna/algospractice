
CC=gcc
CFLAGS=-g -Wall
BINS= treeexample
OBJ=tree
TARGET=tree

all: 
	$(BIN)

# %: %.c
# 	$(CC) $(CFLAGS) $^ -o $@

$(TARGET): $(TARGET).c
	$(CC) $(CFLAGS) -o $(TARGET) $(TARGET).c	

clean: $(RM) $(BINS)
