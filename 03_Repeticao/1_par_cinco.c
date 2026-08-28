#include <stdio.h>

int main() {

    int num;
    int cont = 0;

    for (int i = 1; i<= 5; i++) {
        scanf("%d", &num);

        if (num % 2 == 0) {
            cont = cont + 1;
        }

    }

    printf("%d valores pares\n", cont);

    return 0;
}