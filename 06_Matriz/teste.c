#include <stdio.h>

void leitor_matriz(int M, int N, int mat[M][N]) {
    
    for(int i = 0; i < M; i++){
        for(int j = 0; j < N; j++) {
            scanf("%d", &mat[i][j]);
        }
    }

}


int main() {

    int M, N;

    // M --> Quantidade de linhas
    // N --> Quantidade de colunas

    scanf("%d %d", &M, &N);

    int mat[M][N];

    leitor_matriz(M, N, mat);


    return 0;
}