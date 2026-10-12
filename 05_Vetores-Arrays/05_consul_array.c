#include <stdio.h>

void array(int tamanho, int X[]) {
    for (int i = 0; i < tamanho; i++) {
        scanf("%d", &X[i]);
    }

}

void inverter_array(int X[], int i, int j, int k) {

    for (int cont = i; cont <= j; cont++) {
        X[cont] = X[cont] ^ (1 << k);
    }

}

void soma_array(int X[], int i, int j) {

    int soma = 0;

    for (int cont = i; cont <= j; cont++){
        soma = soma + X[cont];
    }

    printf("%d\n", soma);

}

void consulta_operacao(int X[]) {

    char operacao[10];

    scanf("%s", operacao);

    if (operacao[0] == 'I') {
        int i, j, k;

        scanf("%d %d %d", &i, &j, &k);

        inverter_array(X, i, j, k);

    } else {

        int i, j;

        scanf("%d %d", &i, &j);

        soma_array(X, i, j);

    }

}

int main() {

    int N, Q;
    int X[1000];

    scanf("%d", &N);

    array(N, X);

    scanf("%d", &Q);

    for (int cont = 0; cont < Q; cont++) {
        consulta_operacao(X);
    }


    return 0;
}