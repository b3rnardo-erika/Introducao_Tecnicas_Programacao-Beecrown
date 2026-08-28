#include <stdio.h>

int main() {

    float num;
    float media = 0.0;
    int cont = 0;

    for (int i = 1; i <= 6; i++) {

        scanf("%f", &num);

        if (num > 0) {
            cont = cont + 1;
            media = media + num;
        }

    }

    printf("%d valores positivos\n", cont);
    printf("%.1f\n", (media/cont));

    return 0;
}