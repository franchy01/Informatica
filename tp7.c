
// Nombre: Camaño Franco David
// Legajo: 410155
//https://github.com/franchy01/Informatica

#include <stdio.h>
#define TAM 5

int main() {
	int codigos[TAM];
	float precios[TAM];
	int i;
	
	printf("Ingrese %d productos, se solicitara el codigo y precio:\n\n", TAM);
	
	for (i = 0; i < TAM; i++) {
		
		do {
			printf("Ingrese el codigo de barras (1-999999999): ");
			scanf("%d", &codigos[i]);
			if (codigos[i] < 1 || codigos[i] > 999999999) {
				printf("Error. El codigo de barras debe estar entre 1 y 999999999\n\n");
			}
		} while (codigos[i] < 1 || codigos[i] > 999999999);
		
	
		do {
			printf("\nIngrese el precio: ");
			scanf("%f", &precios[i]);
			if (precios[i] < 0) {
				printf("Error. El precio no puede ser negativo\n");
			}
		} while (precios[i] < 0);
		
		printf("\n");
	}
	
	
	printf("Codigo        Precio\n\n");
	for (i = 0; i < TAM; i++) {
		printf("%d        %.2f\n\n", codigos[i], precios[i]);
	}
	
	
	int Mayor = 0, Menor = 0;
	for (i = 1; i < TAM; i++) {
		if (precios[i] > precios[Mayor]) {
			Mayor = i;
		}
		if (precios[i] < precios[Menor]) {
			Menor = i;
		}
	}
	
	printf("Mas caro:   [%d] %.2f\n", codigos[Mayor], precios[Mayor]);
	printf("Mas barato: [%d] %.2f\n", codigos[Menor], precios[Menor]);
	
	return 0;
}
