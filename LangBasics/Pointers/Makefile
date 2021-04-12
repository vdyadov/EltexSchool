CC = gcc
FLAGS = -Wall -o
FILE1 = task1
FILE2 = task2
FILE3 = task3

all: $(FILE1) $(FILE2) $(FILE3)
	$(CC) $(FILE1).c $(FLAGS) $(FILE1)
	$(CC) $(FILE2).c $(FLAGS) $(FILE2)
	$(CC) $(FILE3).c $(FLAGS) $(FILE3)

test1:
	./$(FILE1)

test2:
	./$(FILE2)

test3:
	./$(FILE3)

clean:
	rm $(FILE1) $(FILE2) $(FILE3)
