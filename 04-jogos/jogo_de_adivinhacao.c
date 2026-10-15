#include <stdio.h>

int main()
{
    int numero, tentativas = 0;
    const int numero_secreto = 42;

    printf("Jogo de Adivinhacao!\n");
    printf("Tente adivinhar o numero entre 1 e 100:\n");

    do
    {
        printf("Digite um numero: ");
        scanf("%d", &numero);
        tentativas++;

        if (numero < numero_secreto)
        {
            printf("Muito baixo! Tente novamente.\n");
        }
        else if (numero > numero_secreto)
        {
            printf("Muito alto! Tente novamente.\n");
        }
        else
        {
            printf("Parabens! Voce acertou em %d tentativas!\n", tentativas);
        }
    } while (numero != numero_secreto);

    return 0;
}