#include <stdio.h>

int main() {

    int num, maior, posicao;

    scanf("%d", &maior);
    posicao = 1;

    for (int i = 2; i <= 100; i++) {

        scanf("%d", &num);

        if (num > maior) {
            maior = num;
            posicao = i;
        }
    }

    printf("%d\n", maior);
    printf("%d\n", posicao);

    return 0;
}