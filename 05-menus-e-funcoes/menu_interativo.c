#include <stdio.h>

void exibirMenu() {
    printf("=== SISTEMA BANCARIO ===\n");
    printf("1. Consultar saldo\n");
    printf("2. Depositar\n");
    printf("3. Sacar\n");
    printf("4. Sair\n");
    printf("Escolha uma opcao: ");
}

int main () {
    int opcao;
    float saldo = 1000.0; // Saldo inicial
    float valor;

    do {
        exibirMenu();
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Seu saldo atual e: R$ %.2f\n", saldo);
                break;
            case 2:
                printf("Digite o valor a ser depositado: R$ ");
                scanf("%f", &valor);
                if (valor > 0) {
                    saldo += valor;
                    printf("Deposito realizado com sucesso! Novo saldo: R$ %.2f\n", saldo);
                } else {
                    printf("Valor invalido para deposito.\n");
                }
                break;
            case 3:
                printf("Digite o valor a ser sacado: R$ ");
                scanf("%f", &valor);
                if (valor > 0 && valor <= saldo) {
                    saldo -= valor;
                    printf("Saque realizado com sucesso! Novo saldo: R$ %.2f\n", saldo);
                } else {
                    printf("Valor invalido para saque ou saldo insuficiente.\n");
                }
                break;
            case 4:
                printf("Saindo do sistema. Obrigado!\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }
} while (opcao != 4);

    return 0;
}

