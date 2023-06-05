
/* Se implementa multiplicación de matrices con iguales dimensiones */
/*Se inicializa las matrices con números aleatorios*/

#ifndef BENCHMARK_LIB_H_INCLUDED
#define BENCHMARK_LIB_H_INCLUDED

void inicializar_int(int *a, int *b, int *c, int N);

void inicializar_int_rnd(int *a, int *b, int *c, int N);

int random_int();

void mm_c_ptr(int *a, int *b, int *c, int N);

void punto_prueba_final();

void punto_prueba_inicial();

#endif
