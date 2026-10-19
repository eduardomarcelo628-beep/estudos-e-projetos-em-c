#include <stdio.h>

int main() {
    int opcao;
    float peso, altura, imc;

    do {
    printf(" ==== CALCULADORA DE IMC! ====\n");
    printf("Olá! Este é um programa para calcular o Índice de Massa Corporal (IMC).\n");
    printf("1. Calcular IMC\n");
    printf("2. Sobre o cálculo\n");
    printf("3. Sair\n");
    printf("Por favor, escolha uma das opções abaixo para iniciar:\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Você escolheu calcular o IMC.\n");

            printf("Digite seu peso em kg (ex: 70.5): ");
            scanf("%f", &peso);

            printf("Digite sua altura em metros (ex: 1.75): ");
            scanf("%f", &altura);

            imc = peso / (altura * altura);

            printf("Seu IMC é: %.2f\n", imc);

            if (imc < 18.5) {
                printf("Classificação: Abaixo do peso.\n");
            } else if (imc >= 18.5 && imc < 24.9) {
                printf("Classificação: Peso normal.\n");
            } else if (imc >= 25 && imc < 30) {
                printf("Classificação: Sobrepeso.\n");
            } else {
                printf("Classificação: Obesidade.\n");
            }
            break;
        case 2:
            printf("O cálculo do IMC é feito dividindo o peso (em kg) pela altura (em metros) ao quadrado.\n");
            break;
        case 3:
            printf("Saindo do programa. Obrigado por usar a calculadora de IMC!\n");
            break;
        default:
            printf("Opção inválida. Por favor, escolha uma opção válida.\n");
        }
    } while (opcao != 3);

    return 0;
}