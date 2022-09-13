
GCC = gcc
FLAGS = -ansi -pedantic -Wall -std=c99 -D_POSIX_C_SOURCE=199309L
MATHFLAG = -lm

PROGS = Benchmark_main Benchmark_main_rnd

all: $(PROGS)

Benchmark_main:
	$(GCC) $(FLAGS) -c $@.c 
	$(GCC) $(FLAGS) -c Benchmark_lib.c 
	$(GCC) $(FLAGS) -o $@ $@.o Benchmark_lib.o $(MATHFLAG)

Benchmark_main_rnd:
	$(GCC) $(FLAGS) -c $@.c 
	$(GCC) $(FLAGS) -c Benchmark_lib.c 
	$(GCC) $(FLAGS) -o $@ $@.o Benchmark_lib.o $(MATHFLAG)

clean:
	$(RM) *.o $(PROGS)
