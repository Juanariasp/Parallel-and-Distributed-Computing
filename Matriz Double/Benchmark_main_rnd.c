
/* Se implementa multiplicación de matrices con iguales dimensiones */
/*Se inicializa las matrices con números aleatorios*/
#include <stdlib.h>
#include "Benchmark_lib.h"

/*** Se requiere reservar un espacio de memoria ***/
#define DATA_SIZE (1024*1024*64*3)
static double MEM_CHUNK[DATA_SIZE];


int main(int argc, char **argv){
	int N;
	
	N = (int)atof(argv[1]);

	/***Declaracion de matrices con apuntadores a memoria***/	
	double *a, *b, *c;
	
	a = MEM_CHUNK;
	b = a + N*N;
	c = b + N*N;
	
	inicializar_double_rnd(a,b,c,N);

	punto_prueba_inicial();

	mm_c_ptr(a,b,c,N);

	punto_prueba_final();
	
	return 0;
}















