#include <stdio.h>
#include "pico/stdlib.h"

/**
* @brief Programa principal
*/

int main(void) {
	// Inicializo el USB
    stdio_init_all();
	// Demora para esperar la conexion
	sleep_ms(1000);
	int16_t ab;
	int16_t ba;
	char bc;
	// Cuanto ocupa cada tipo de dato
	printf("Un char ocupa %d byte\n", sizeof(char));
	printf("Un short ocupa %d bytes\n", sizeof(short));
	printf("Un int ocupa %d bytes\n", sizeof(int));
	printf("Un long int ocupa %d bytes\n", sizeof(long int));
	printf("Un float ocupa %d bytes\n", sizeof(float));
	printf("Un double ocupa %d bytes\n", sizeof(double));
    while (true) {
		printf ("Dame un numero: ");
		scanf ("%hd",&ab);
		fflush (stdin);
		printf("%hd\n", ab);
		printf("que quieres que haga ? +,-,* o / ?\n");
		scanf ("%c",&bc);
                fflush (stdin);
                printf("%c\n", bc);
		printf ("Dame otro numero que sea mayor a 0: ");
		scanf ("%hd", &ba);
		fflush (stdin);
		printf("%hd\n", ba);
		if (ba == 0)
			printf("el 0 no es un numero valido para estas ecuaciones");
		else
			if (bc == '+')
				 printf("El resultado es %hd\n\n", ab+ba);
			if (bc == '-')
		        	 printf("El resultado es %hd\n\n", ab-ba);
                	if (bc == '*')
                        	 printf("El resultado es %hd\n\n", ab*ba);
                	if (bc  == '/')
                        	 printf("El resultado es %hd\n\n", ab/ba);


    }
    return 0;
}
