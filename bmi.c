#include <stdio.h>

// Nombre: Franco Camaño
// Legajo:  410155

int main(void)
{
	float peso;
	float altura;
	float bmi;
	
do{
	printf("Ingrese el peso en kg:");
	scanf("%f", &peso);
if (peso<=0){
        printf("Error ingrese el peso nuevamente\n");         
     }
    }
while(peso<=0);
       printf("El peso es valido\n");    

	
do{
	printf("Ingrese la altura en metros:");
	scanf("%f", &altura);
	
 if (altura<=0){      
         printf("Error ingrese la altura nuevamente\n");      
     }
    }
while(altura<=0);
        printf("El peso es valido\n");	
	
	
	bmi= (peso/(altura*altura));

	printf("\n");
	printf("\nIndice | Condicion:\n");
	printf("----------------------------- ");
	printf("\n <18.5 | Bajo peso ");
	printf("\n 18.5 a 24.9 | Normal ");
	printf("\n 25.0 a 29.9 | Sobrepeso ");
	printf("\n >=30| Obesidad ");
	
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
	
	
	
	return 0;
}
