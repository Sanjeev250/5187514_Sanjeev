CC = gcc
CFLAGS = -Wall -g -IUnity

SRCS = main.c leap.c
OBJS = $(SRCS:.c=.o)

TEST_SRCS = test.c leap.c Unity/unity.c
TEST_OBJS = $(TEST_SRCS:.c=.o)

TARGET = main.exe
TEST_TARGET = test.exe

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $(TARGET)

$(TEST_TARGET): $(TEST_OBJS)
	$(CC) $(CFLAGS) $(TEST_OBJS) -o $(TEST_TARGET)

run: $(TARGET)
	./$(TARGET)

runtest: $(TEST_TARGET)
	./$(TEST_TARGET)

clean:
	rm -f *.o $(TARGET) $(TEST_TARGET)

.PHONY: all run runtest clean