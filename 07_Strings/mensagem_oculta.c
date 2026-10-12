#include <stdio.h>
#include <string.h>

// Nível da questão no beecrown --> 3

void mensagem_oculta(char texto[]) {

    for (int i = 0; texto[i] != '\0'; i++) {
        if (texto[i] != ' ' && (i == 0 || texto[i - 1] == ' ')) {
            printf("%c", texto[i]);
        }
    }
    

}

int main() {

    char texto[52];
    int N;

    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++) {

        fgets(texto, sizeof(texto), stdin);

        texto[strcspn(texto, "\n")] = '\0';

        mensagem_oculta(texto);
        printf("\n");

    }

    return 0;
}