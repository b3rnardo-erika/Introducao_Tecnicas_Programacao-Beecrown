#include <stdio.h>

void pum(int n) {

    for(int i = 1; i <= n * 4; i += 4) {
        printf("%d %d %d PUM\n", i, i + 1, i + 2);
    }

}

int main() {

    int num;

    scanf("%d", &num);

    pum(num);

    return 0;
}