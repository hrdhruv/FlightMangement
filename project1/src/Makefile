G=gcc

LINKER=$(G) -o



OBJS= arithmetic.o condition.o interpreter.o main.o print.o variable.o

all::obj/a.out

obj/a.out: $(OBJS)
	$(LINKER) a.out $(OBJS)

main.o: main.c interpreter.o
	$(G) -c main.c

variable.o: variable.c
	$(G) -c variable.c

print.o: print.c
	$(G) -c print.c

arithmetic.o: arithmetic.c
	$(G) -c arithmetic.c

condition.o: condition.c
	$(G) -c condition.c

interpreter.o: interpreter.c arithmetic.o condition.o print.o variable.o
	$(G) -c interpreter.c

clean:
	rm -rf *.o *.out