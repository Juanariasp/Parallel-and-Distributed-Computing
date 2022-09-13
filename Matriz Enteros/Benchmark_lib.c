
/* Se implementa multiplicación de matrices con iguales dimensiones */
/*Se inicializan las matrices con números aleatorios*/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>
#include <errno.h>
#include <unistd.h>

struct timespec inicioCuenta, finCuenta;

/*** Función para crear aleatorios de tipo entero ***/
int random_int(){
	int min=0, max=9;
	static int flag = -1;
	if((flag = (flag<0)))
		srand(time(NULL) + getpid());
	if(min>max)
		return errno = EDOM, NAN;
	return min + (int)rand()/((int)RAND_MAX/(max-min));
	
}

/****Función Inicializadora****/
void inicializar_int_rnd(int *a, int *b, int *c, int N){
	for(int i = 0; i<N ; i++){
		for(int j=0; j<N ; j++){
			a[i+j*N] = random_int();
			b[i+j*N] = random_int();
			c[i+j*N] = 0;
		}
	}	
}


/****Función Inicializadora****/
void inicializar_int(int *a, int *b, int *c, int N){
	for(int i = 0; i<N ; i++){
		for(int j=0; j<N ; j++){
			a[i+j*N] = 2*(i+j);
			b[i+j*N] = 2*i+3*j;
			c[i+j*N] = 0;
		}
	}	
}

void mm_c_ptr(int *a, int *b, int *c, int N){
	/*** Multiplicación de Matrices: Clásica ***/
	for(int i = 0; i<N ; i++){
		for(int j=0; j<N ; j++){
			int suma = 0;
			/**Punteros Auxiliares**/
			int *pA, *pB;
			pA = a + (i*N);
			pB = b + j;
			for(int k=0; k<N ; k++, pA++, pB+=N){
				suma += (*pA * *pB);
			}
			c[j+i*N]=suma;
		}
	}
}

/***Función evaluación inicio de tiempo***/
void punto_prueba_inicial(){
	clock_gettime(CLOCK_MONOTONIC, &inicioCuenta);
}

/***Función evaluación final de tiempo, impresión de resultado***/
void punto_prueba_final(){
	double total_time;
	clock_gettime(CLOCK_MONOTONIC, &finCuenta);
	total_time = (finCuenta.tv_sec - inicioCuenta.tv_sec)*1e9;
	total_time = (total_time + finCuenta.tv_nsec - inicioCuenta.tv_nsec)*1e-9;
	printf("%f\n",total_time);
}
