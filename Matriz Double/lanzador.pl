#!/usr/bin/perl

=begin comment
Fecha: 23 Agosto 2022
Autor: Juan Camilo Hernandez Ibañez
Tema: Ejecución automatizada de Benchmarks
=cut

#Vector para los benchmarks
@Benchmarks = ("Benchmark_main", "Benchmark_main_rnd");
#Vector para las cargas
@Cargas = ("280","360","440","520","600","680","860","1100","1400","1800","2000","2500"); #NÚMERO DE REPETICIONES 
$n = 30;

#SE ALMACENA LA UBICAION
$Path = "/home/juanes/Documentos/C/matriz\ Double/";


#Se itera sobre
#la cantidad de ejecutables
#la cantidad de cargas
#la cantidad de repeticiones

foreach $exes(@Benchmarks){
    foreach $carga(@Cargas){
        #Se crea un fichero para almacenar los datos
        $file = "Soluciones/".$exes."-size-".$carga.".txt";
        #printf("$Path$file\n");
        for ($i=0; $i<$n;$i++){
            system("$Path$exes $carga >> $file");
            #printf("$Path$exes $carga\n");
        }
        close($file);
    }
}
 

#La concatenacion es con un punto