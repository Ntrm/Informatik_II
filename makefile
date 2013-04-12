CC = gcc -Wall
OBJ = ueb01.o dateutils.o tools.o
PROG = ueb01

$(PROG): $(OBJ)
	$(CC) -o $@ $^

ueb01.o: ueb01.c dateutils.h tools.h
	$(CC) -c $<

dateutils.o: dateutils.c dateutils.h tools.h
	$(CC) -c $<

tools.o: tools.c tools.h
	$(CC) -c $<

clean:
	rm -f $(OBJ) $(PROG)

run:
	@./$(PROG)

all: clean $(PROG) run
