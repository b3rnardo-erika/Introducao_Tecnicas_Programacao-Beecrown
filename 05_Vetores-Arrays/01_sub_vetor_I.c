#include <stdio.h>

void ler_vetor(int X[]) {
    for (int i = 0; i < 10; i++) {
        scanf("%d", &X[i]);
    }
}

void substituir_vetor(int X[]) {
    for (int i = 0; i < 10; i++) {
        if (X[i] <= 0) {
            X[i] = 1;
        }
    }
}

void mostrar_vetor(int X[]) {
    for (int i = 0; i < 10; i++) {
        printf("X[%d] = %d\n", i, X[i]);
    }
}

int main() {

    int X[10];

    ler_vetor(X);
    substituir_vetor(X);
    mostrar_vetor(X);

    return 0;
}