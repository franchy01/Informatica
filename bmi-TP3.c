#include <stdio.h>

int main(void)
{
	float peso;
	float altura;
	float bmi;
	
	
	printf("Ingrese el peso en kg:");
	scanf("%f", &peso);
	printf("Ingrese la altura en metros:");
	scanf("%f", &altura);
	
	
	
	bmi= (peso/(altura*altura));
	
	printf("Su Indice de masa corporal es: %.2f\n", bmi );
	
	if( bmi <=18.5)
	{
		printf("\n Esta por debajo del peso");
	}
	else if (bmi>=18.5 && bmi<=24.9)
	{
		printf("\n estas dentro del peso normal");
	}
	else if (bmi>=25.0 && bmi<=29.9)
	{
		printf("\n tienes sobrepeso");
	}
	else{
		printf("\n tenes obesidad waso");
	}
	
	printf("\n");
	printf("\nIndice | Condicion:\n");
	printf("----------------------------- ");
	printf("\n <18.5 | Bajo peso ");
	printf("\n 18.5 a 24.9 | Normal ");
	printf("\n 25.0 a 29.9 | Sobrepeso ");
	printf("\n >=30| Obesidad ");
	
	return 0;
}
