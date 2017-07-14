CC = gcc
CFLAGS = -Wall -g

TARGET =  hello

all: $(TARGET)

.PHONY: all clean

clean:
	-rm $(TARGET) *.txt
