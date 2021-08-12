#include <stdio.h>
int main(void)
{
    int numero;

    printf("\n\nEssa é a sequência de 0 a 9:\n");
    for (numero = 0; numero < 10; numero = numero + 1)
    {
        printf("%d ", numero);
    }
    printf("\n\nEssa é a sequência de 0 a 9:\n");
    numero = 0;
    while (numero < 10)
    {
        printf("%d ", numero);
        numero = numero + 1;
    }
    printf("\n\nEssa é a sequência de 10 a 100:\n");
    for (numero = 10; numero < 101; numero = numero + 1)
    {
        printf("%d ", numero);
    }
    printf("\n\nEssa é a sequência de 10 a 100:\n");
    numero = 10;
    while (numero < 101)
    {
        printf("%d ", numero);
        numero++;
    }    
    printf("\n\nEssa é a sequência de 0 a 2021:\n");
    for (numero = 0; numero < 2022; numero = numero + 1)
    {
        printf("%d ", numero);
    }
     printf("\n\nEssa é a sequência de 0 a 10000:\n");
    for (numero = 0; numero < 10001; numero = numero + 1)
    {
        printf("%d ", numero);
    }
    printf("\n\nEssa é a sequência de 9 a 0:\n");
    for (numero = 9; numero > -1; numero--)
    {
        printf("%d ", numero);
    }
   return (0);
}
