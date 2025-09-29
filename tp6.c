#include <stdio.h>
#include <math.h>


float calcularAreaRectangulo(float longitud, float altura);
float calcularPerimetroRectangulo(float longitud, float altura);
float calcularDiagonalRectangulo(float longitud, float altura);
float calcularAreaCirculo(float radio);
float calcularPerimetroCirculo(float radio);
void imprimirResultados(float area, float perimetro);

int main() {
	int opcion;
	float longitud, altura, radio;
	float area, perimetro;
	
	printf("Ingrese la figura que desea calcular:\n");
	printf("1: Rectangulo\n");
	printf("2: Circulo\n");
	printf("Opcion: ");
	scanf("%d", &opcion);
	
	if (opcion == 1) {
		printf("\nOpcion de rectangulo seleccionada\n");
		printf("Ingrese la longitud del rectangulo: ");
		scanf("%f", &longitud);
		printf("Ingrese la altura del rectangulo: ");
		scanf("%f", &altura);
		
		area = calcularAreaRectangulo(longitud, altura);
		perimetro = calcularPerimetroRectangulo(longitud, altura);
		
		imprimirResultados(area, perimetro);
		
		printf("La diagonal del rectangulo es: %.2f\n", 
			   calcularDiagonalRectangulo(longitud, altura));
	} 
	else if (opcion == 2) {
		printf("\nOpcion de circulo seleccionada\n");
		printf("Ingrese el radio del circulo: ");
		scanf("%f", &radio);
		
		area = calcularAreaCirculo(radio);
		perimetro = calcularPerimetroCirculo(radio);
		
		imprimirResultados(area, perimetro);
	} 
	else {
		printf("Opcion invalida. Debe ser 1 o 2.\n");
	}
	
	return 0;
}


float calcularAreaRectangulo(float longitud, float altura) {
	return longitud * altura;
}

float calcularPerimetroRectangulo(float longitud, float altura) {
	return 2 * (longitud + altura);
}

float calcularDiagonalRectangulo(float longitud, float altura) {
	return sqrt(pow(longitud, 2) + pow(altura, 2));
}

float calcularAreaCirculo(float radio) {
	return M_PI * pow(radio, 2);
}

float calcularPerimetroCirculo(float radio) {
	return 2 * M_PI * radio;
}

void imprimirResultados(float area, float perimetro) {
	printf("El area es: %.2f\n", area);
	printf("El perimetro es: %.2f\n", perimetro);
}

