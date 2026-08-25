#include <stdio.h>

int main() {

    int codigo, qtdd;
    double preco, total;

    scanf("%d %d", &codigo, &qtdd);

    if (codigo == 1) {
        preco = 4.00;
    } else if (codigo == 2) {
        preco = 4.50;
    } else if ( codigo == 3) {
        preco = 5.00;
    } else if (codigo == 4) {
        preco = 2.00;
    } else if (codigo == 5) {
        preco = 1.50;
    }

    total = preco * qtdd;

    printf("Total: R$ %.2lf\n", total);

    return 0;

}