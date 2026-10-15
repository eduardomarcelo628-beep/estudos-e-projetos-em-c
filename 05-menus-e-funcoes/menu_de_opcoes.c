#include <stdio.h>

int main() {
    int opcao;
    
    printf("Menu de Opcoes:\n");
    printf("1. Novo Jogo\n");
    printf("2. Carregar Jogo\n");
    printf("3. Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Iniciando novo jogo...\n");
            break;
        case 2:
            printf("Carregando jogo...\n");
            break;
        case 3:
            printf("Saindo do programa...\n");
            break;
        default:
            printf("Opcao invalida. Tente novamente.\n");
    }

    return 0;
}