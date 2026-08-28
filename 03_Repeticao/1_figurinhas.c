#include <stdio.h>

// Algoritmo de Euclides

int mdc(int a, int b) {
    while (b != 0) {
        int resto = a % b;
        a = b;
        b = resto;
    }

    return a;
}

int main() {

    int teste;
    int valor1, valor2;

    scanf("%d", &teste);

    for (int i = 0; i < teste; i++) {
        scanf("%d %d", &valor1, &valor2);

        printf("%d\n", mdc(valor1, valor2));
    }

    return 0;
}