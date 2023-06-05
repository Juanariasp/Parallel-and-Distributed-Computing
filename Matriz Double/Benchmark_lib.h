
/* Se implementa multiplicación de matrices con iguales dimensiones */
/*Se inicializa las matrices con números aleatorios*/

#ifndef BENCHMARK_LIB_H_INCLUDED
#define BENCHMARK_LIB_H_INCLUDED

void inicializar_double(double *a, double *b, double *c, int N);

void inicializar_double_rnd(double *a, double *b, double *c, int N);

int random_double();

void mm_c_ptr(double *a, double *b, double *c, int N);

void punto_prueba_final();

void punto_prueba_inicial();

#endif
