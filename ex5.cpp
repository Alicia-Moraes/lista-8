#include <stdio.h>
#include <stdlib.h>

int main() {
    int *matriz = NULL;
    int linhas = 3, colunas = 3;

    matriz = (int *) calloc(linhas * colunas, sizeof(int));

    if (matriz == NULL)
        return 1;

    printf("Matriz %dx%d:\n", linhas, colunas);
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", matriz[i * colunas + j]);
        }
        printf("\n");
    }

    free(matriz);

    getchar();
    return 0;
}