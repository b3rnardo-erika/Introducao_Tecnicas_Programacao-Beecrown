#include <stdio.h>

int diferenca (int n, int m) {
    return n - m;
}

int main() {

    int num, bomba;

    scanf("%d", &num);
    scanf("%d", &bomba);

    printf("%d\n", diferenca(num, bomba));

    return 0;
}