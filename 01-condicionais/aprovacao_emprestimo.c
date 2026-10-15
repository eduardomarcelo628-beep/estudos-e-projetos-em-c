#include <stdio.h>

int main() {
    int idade;
    float renda;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite sua renda: ");
    scanf("%f", &renda);

    if (idade >= 18 && renda >= 2000) {
        printf("Aprovado para emprestimo.\n");
    } else {
        printf("Nao aprovado para emprestimo.\n");
    }

    return 0;
}

