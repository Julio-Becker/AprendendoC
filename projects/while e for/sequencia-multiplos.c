#include <stdio.h>
int main(void)
{
    int numero;
    
    printf("\n\nEssa é a seguência de 2 a 100 só de numeros pares\n");
    for(numero = 2; numero < 101; numero += 2)
   {
       printf("%d ", numero);
   }
   printf("\n\nEssa é a seguência de 1 a 99 só de numeros impares\n");
   for(numero = 1; numero < 100; numero += 2)
   {
       printf("%d ", numero);
   }
   printf("\n\nEssa é a seguência de 5 a 35 só de multiplos de 5\n");
   for(numero = 5; numero < 36; numero += 5)
   {
       printf("%d ", numero);
   }
   printf("\n\nEssa é a seguência de 70 a 7 só de multiplos de 7\n");
   for(numero = 70; numero > 6; numero -= 7)
   {
       printf("%d ", numero);
   }
   return (0);
}
