#Config (Variables)
CC=gcc
TARGET= PA1

#Generate source and object lists, also just string variables
C_SRCS := driver.c functions.c

HDRS := functions.h


all: build
	@echo "All Done"

#Link all built objects
build: $(OBJS)
	$(CC) $(C_SRCS) -o $(TARGET)

clean:
	rm -f $(TARGET)

run: build
	./$(TARGET) 25 20
