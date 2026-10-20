#include <stdio.h>
#include <string.h>

int main(void)
{
    char filmes[5][50];
    int ingressos[5];
    int total_ingressos = 0;
    int indiceMenor = 0;
    int indiceMaior = 0;

        // Entrada de dados: nomes dos filmes e ingressos vendidos
        for (int i = 0; i < 5; i++)
    {
        printf("\nDigite o nome do filme %d: ", i + 1);
        fgets(filmes[i], sizeof(filmes[i]), stdin);

        // Remove a quebra de linha do nome, se existir
        filmes[i][strcspn(filmes[i], "\n")] = '\0';

        printf("Digite a quantidade de ingressos vendidos: ");

        if (scanf("%d", &ingressos[i]) != 1 || ingressos[i] < 0)
        {
            printf("Entrada invalida! Digite um numero inteiro nao negativo.\n");
            return 1;
        }

        // Limpa o restante da linha antes da proxima leitura
        while (getchar() != '\n')
            ;
    }

    // Processamento: soma e identificacao dos extremos
    for (int i = 0; i < 5; i++)
    {
        total_ingressos += ingressos[i];

        if (ingressos[i] < ingressos[indiceMenor])
        {
            indiceMenor = i;
        }

        if (ingressos[i] > ingressos[indiceMaior])
        {
            indiceMaior = i;
        }
    }

    // Exibicao dos resultados
    printf("\n========== RELATORIO DE VENDAS ==========\n");

    for (int i = 0; i < 5; i++)
    {
        printf("Filme: %s | Ingressos: %d\n",
               filmes[i], ingressos[i]);
   }

    printf("\nTotal de ingressos vendidos: %d\n", total_ingressos);
    printf("Filme com menos ingressos: %s (%d)\n",
           filmes[indiceMenor], ingressos[indiceMenor]);
    printf("Filme com mais ingressos: %s (%d)\n",
           filmes[indiceMaior], ingressos[indiceMaior]);

    // Grafico textual: um asterisco para cada 10 ingressos
    printf("\n========== GRAFICO DE VENDAS ==========\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%-20s | ", filmes[i]);

        for (int j = 0; j < ingressos[i] / 10; j++)
        {
            printf("*");
        }

        printf(" (%d)\n", ingressos[i]);
    }

    return 0;
    
}
