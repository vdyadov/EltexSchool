CC = gcc
FLAGS = -Wall -o
FILE1 = task1
FILE2 = task2

all: $(FILE1).c $(FILE2).c
	$(CC) $(FILE1).c $(FLAGS) $(FILE1)
	$(CC) $(FILE2).c $(FLAGS) $(FILE2)

test1:
	./$(FILE1)

test2:
	./$(FILE2)

clean:
	rm $(FILE1) $(FILE2)
