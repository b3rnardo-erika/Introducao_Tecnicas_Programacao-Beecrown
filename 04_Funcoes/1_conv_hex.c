#include <stdio.h>

void hexadecimal(int n) {
    printf("%X\n", n);

}

int main() {

    int num;

    scanf("%d", &num);

    hexadecimal(num);

    return 0;
}