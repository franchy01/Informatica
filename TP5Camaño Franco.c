//Legajo: 410155
//Nombre: Camaño Franco David

//Link repositorio:  https://github.com/franchy01/Informatica

#include <stdio.h>

int main(void){
    
 float notas;
 float notamax=1;
 float notamin=100;
 int cantest;
 float sumanotas=0;
 float prom;
 
 do{
 printf("ingresar cantidad de estudiantes");
 scanf("%d",&cantest);
 
 if (cantest<0){
     printf("ERROR INGERESE NUEVAMENTE\n");
 }
  }
 while(cantest<0);
 
 printf("el numero es valido\n");
 
 
 for (int i=0; i<cantest; i++) {
     printf("ingresar nota");
     scanf("%f", &notas);
     
     if (notas<0 || notas>100){
         printf("NOTA INVALIDA\n");
         
         i--;
         continue;
        
    
     }
    
     while (notas<0 && notas>100);
    
        sumanotas +=notas;
     
     if(notamax<notas){
         notamax=notas;
     }
     
     if (notamin>notas){
         notamin=notas;
     }
    }
     

  prom= (sumanotas/cantest);
  
  printf("El promerdio es de %.2f\n", prom);
  printf("La nota mas alta es de %.2f\n", notamax);
  printf("La nota mas baja es de %.2f\n", notamin);
 
   
    return 0;
}
