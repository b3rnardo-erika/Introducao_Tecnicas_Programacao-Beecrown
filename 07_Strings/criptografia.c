#include <stdio.h>
#include <string.h>

// Nível da questão no beecrown --> 5

void primeira_etapa (char texto[]) {

    for (int i = 0; texto[i] != '\0'; i++) {
        if ((texto[i] >= 'A' && texto[i] <= 'Z') || 
            (texto[i] >= 'a' && texto[i] <= 'z')) {
            texto[i] = texto[i] + 3;

        }
    }

}

void segunda_etapa (char texto[]) {

    int tamanho = strlen(texto);

    for (int i = 0; i < tamanho / 2; i++){
        char temp = texto[i];
        texto[i] = texto[tamanho - 1 - i];
        texto[tamanho - 1 - i] = temp;

    }

}

void terceira_etapa (char texto[]) {

    int tamanho = strlen(texto);

    for (int i = tamanho / 2; i < tamanho; i++) {
        texto[i]--;
    }

}

int main() {

    int N;
    char texto[1001];

    scanf("%d", &N);
    getchar();

    for (int i = 0; i < N; i++) {

        fgets(texto, sizeof(texto), stdin);

        texto[strcspn(texto, "\n")] = '\0';

        primeira_etapa(texto);
        segunda_etapa(texto);
        terceira_etapa(texto);

        printf("%s\n", texto);
    }


    return 0;
}