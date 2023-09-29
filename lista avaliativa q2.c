#include <stdio.h>
#include <stdlib.h>

int main(){
  int numero, numero1;
  int somaDosDigitos = 0;

 
  scanf("%d", &numero);

  if(numero % 2 == 0){
      printf("%d eh par\n", numero);
  } else{
      printf("%d eh impar\n", numero);
  }
   numero1 = numero;
   while (numero1 > 0){
       somaDosDigitos += numero1 % 10;
       numero1 /= 10;
   }

   printf("A soma dos algarismos de %d eh %d\n", numero, somaDosDigitos);

   return 0;
}
