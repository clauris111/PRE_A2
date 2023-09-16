//Clara de Lima Adriano

#include <stdio.h>

int main() {
    int numero, fatorial = 1;

    do {
        printf("Digite um numero inteiro positivo (ou 0 para sair): ");
        scanf("%d", &numero);

        if (numero < 0) {
            printf("digite um numero positivo.\n");
        } else if (numero > 0) {
            // Cálculo do fatorial
            fatorial = 1;
            for (int i = 1; i <= numero; i++) {
                fatorial *= i;
            }
            printf("Fatorial de %d: %d\n", numero, fatorial);
        }
    } while (numero != 0);

    return 0;
}
