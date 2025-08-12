CC = gcc
CFLAGS = -Wall -g -IUnity

# Sources for main program
SRCS = main.c add.c diff.c div.c product.c
OBJS = $(SRCS:.c=.o)

# Sources for tests
TEST_SRCS = Test_math.c Unity/unity.c add.c diff.c div.c product.c
TEST_OBJS = $(TEST_SRCS:.c=.o)

# Executables
TARGET = main.exe
TEST_TARGET = test_math.exe

# Default target: build main program
all: $(TARGET)

# Build main executable
$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

# Build and run unit tests
test: $(TEST_TARGET)
	./$(TEST_TARGET)

$(TEST_TARGET): $(TEST_OBJS)
	$(CC) $(CFLAGS) $^ -o $@ -mconsole

# Compile source files to object files
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Run main program
run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o $(TARGET) $(TEST_TARGET)
