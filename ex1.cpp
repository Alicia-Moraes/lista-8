#include <stdio.h>
#include <stdlib.h>

int main() {
    int *vetor = NULL;
    int tamanho;

    printf("Digite o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *) malloc(tamanho * sizeof(int));
    if (vetor == NULL) return 1;

    printf("Vetor: ");
    for (int i = 0; i < tamanho; i++) {
        vetor[i] = i;
        printf("%d ", vetor[i]);
    }
    printf("\n");

    free(vetor);

    getchar();
    return 0;
}