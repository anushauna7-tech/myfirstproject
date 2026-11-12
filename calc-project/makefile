# Compiler and compiler flags
CC = gcc
CFLAGS = -Wall -Wextra -g

# Final executable name
TARGET = calculator

# Object files needed for the build
OBJS = main.o math_utils.o

# Default rule (runs when you just type 'make')
all: $(TARGET)

# Linking rule: combines object files into the final executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

# Compilation rules: turns .c files into .o object files
main.o: main.c math_utils.h
	$(CC) $(CFLAGS) -c main.c

math_utils.o: math_utils.c math_utils.h
	$(CC) $(CFLAGS) -c math_utils.c

# Cleanup rule: removes generated files
clean:
	rm -f $(OBJS) $(TARGET)
