CC = gcc
CFLAGS = -Wall -g -IUnity

SRCS = main.c Find.c
OBJS = $(SRCS:.c=.o)

TEST_SRCS = Find.c test_cases.c Unity/unity.c
TEST_OBJS = $(TEST_SRCS:.c=.o)

TARGET = main.exe
TEST_TARGET = Test_main.exe

%.o : %.c
	$(CC) $(CFLAGS) -c $< -o $@

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) $^ -o $@

all : $(TARGET)

run : $(TARGET)
	./$(TARGET)

$(TEST_TARGET) : $(TEST_OBJS)
	$(CC) $(CFLAGS) $^ -o $@ -mconsole

test : $(TEST_TARGET)
	./$(TEST_TARGET)

clean:
	rm -f *.o $(TARGET) $(TEST_TARGET)
