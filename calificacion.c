


#include <stdio.h>

// Nombre: Franco Camaño
// Legajo:  410155

int main(void)
{
	float calificacion;
	
	
	printf("calificacion:");
	scanf("%f", &calificacion);
	
	if( calificacion >=90)
	{
		printf("Su calificacion es: A\n");
		printf("Su condicion es: Excelente");
	}
	else if (calificacion>=80)
	{
		printf("Su calificacion es: B\n");
		printf("Su condicion es: Bien");
	}
	else if (calificacion>=70)
	{
		printf("Su calificacion es: C\n");
		printf("Su condicion es:  Aprobado");
	}
	
	else if (calificacion>=60)
	{
		printf("Su calificacion es: D\n");
		printf("Su conicion es: Regular");
	}
	else{
		printf("Su calificacion es: F desaprobaste waso\n");
		printf("Su condicion es: Libre");
	}
	
	
	return 0;
}
