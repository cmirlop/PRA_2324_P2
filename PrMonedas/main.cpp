

#include "cambio.h"
#include <iostream>




int main(){

	int cantidad=16;
	int N_monedas=3;
	int v[]= {1,4,6};
	int* p = v;
	
	int* resultado = cambio_vector(N_monedas,p,cantidad);
	
	
	for(int x = 0; x< N_monedas; x++){
		std::cout <<"El minimo es : "<< resultado[x] << std::endl;
	}
	return 0;
}
