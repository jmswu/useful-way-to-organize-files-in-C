CC := gcc
FLAGS := -Wall -std=c99

queue: queue.o
	${CC} ${FLAGS} -o $@ $^

.PHONY: clean
clean:
	@del *.o
	@del queue.exe
	@echo done
