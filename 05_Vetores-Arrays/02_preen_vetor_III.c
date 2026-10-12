#include <stdio.h>

void preenchimento_vetor(double X[]) {

    for (int i = 1; i < 100; i++) {
        X[i] = X[i - 1] / 2;
    }

}

void imprimir_vetor(double X[]) {

    for (int i = 0; i < 100; i++) {
        printf("N[%d] = %.4lf\n", i, X[i]);
    }

}

int main() {

    double X[100];

    scanf("%lf", &X[0]);

    preenchimento_vetor(X);

    imprimir_vetor(X);

    return 0;
}