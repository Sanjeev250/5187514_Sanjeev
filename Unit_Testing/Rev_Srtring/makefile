CC = gcc
CFLAGS = -Wall -g -IUnity

SRCS = main.c reverse.c
OBJS = $(SRCS:.c=.o)

TARGET = main.exe
TEST_TARGET = test.exe

TEST_SRCS = test.c reverse.c Unity/unity.c
TEST_OBJS = $(TEST_SRCS:.c=.o)

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

$(TEST_TARGET): $(TEST_OBJS)
	$(CC) $(CFLAGS) $^ -o $@

run: $(TARGET)
	./$(TARGET)

test: $(TEST_TARGET)
	./$(TEST_TARGET)

clean:
	rm -rf *.o $(TARGET) $(TEST_TARGET)