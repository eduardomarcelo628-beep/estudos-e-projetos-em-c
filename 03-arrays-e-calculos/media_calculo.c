#include <stdio.h>

int main()
{
    int numeros[] = {5, 10, 15, 20, 25};
    int tamanho = sizeof(numeros) / sizeof(numeros[0]);
    int soma = 0;

    for (int i = 0; i < tamanho; i++)
    {
        soma += numeros[i];
    }

    float media = (float)soma / tamanho;
    printf("A media dos numeros e: %.2f\n", media);

    return 0;
}