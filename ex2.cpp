#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL;
    int tamanho;

    printf("Digite quantas posicoes: ");
    scanf("%d", &tamanho);

    vetor = (int *) malloc(tamanho * sizeof(int));

    if (vetor == NULL)
        return 1;

    for (int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Valores armazenados: ");
    for (int i = 0; i < tamanho; i++) {
        printf("%d ", vetor[i]);
    }

    free(vetor);

    getchar();
    return 0;
}