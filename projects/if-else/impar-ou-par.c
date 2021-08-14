#include <stdio.h>
int main(void)
{
    int numero;
    
    printf("Esse é meu programa! Ele descobre se o número que você digitou é par ou impar\n");
    printf("\nDigite um número: ");
    scanf("%d", &numero);
    if (numero % 2 == 0)
    {
        printf("O número %d é par", numero);
    }
    else
    {
        printf("O número %d é impar", numero);
    }
   return (0);
}
