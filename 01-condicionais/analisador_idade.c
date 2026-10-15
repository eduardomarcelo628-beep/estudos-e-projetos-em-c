#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        if (idade >= 65) {
            printf("Idoso.\n");
        } else {
            printf("Adulto.\n");
        }
    } else {
        printf("Menor de idade.\n");
}

return 0;
}
