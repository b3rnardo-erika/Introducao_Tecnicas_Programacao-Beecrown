#include <stdio.h>

// Nível da questão no beecrown --> 1


int main() {

    int N;

    while (scanf("%d", &N) != EOF) {

        for (int i = 0; i < N; i++) {

            for (int j = 0; j < N; j++) {

                if (i == j) {
                    printf("1");
                }
                else if (i + j == N - 1) {
                    printf("2");
                }
                else {
                    printf("3");
                }
            }

            printf("\n");
        }
    }

    return 0;
}