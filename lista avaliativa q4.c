#include <stdio.h>

 int main(){
     char percetual;
     float salario, acresimo;
     
     scanf("%c", &percetual);
     scanf("%f", &salario);
     
     switch(percetual){
         case 'a':
         acresimo = salario * 0.05;
         break;
         
         case 'b':
         acresimo = salario * 0.07;
         break;
         
         case 'c':
         acresimo = salario * 0.08;
         break;
     }
     printf("R$ %2.2f\n", salario + acresimo);
     
     return 0;
 }      