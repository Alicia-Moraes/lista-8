#include <stdio.h>
#include <stdlib.h>

void pares(int* vetor, int tamanho) {
    int *vetorPares = NULL;
    int j = 0;

    vetorPares = (int *) malloc(tamanho * sizeof(int));

    if(vetorPares == NULL) return;

    printf("\n\nValores pares do seu vetor: ");
    for(int i = 0; i < tamanho; i++) {    
        if(vetor[i] % 2 == 0) {
            vetorPares[j] = vetor[i];
            j++;
        }
    }

    for(int i = 0; i < j; i++) printf("%d ", vetorPares[i]);
    printf("\n");

    free(vetorPares);
}

int main() {
    int* vetor = NULL;
    int tamanho;

    printf("Digite quantas posicoes do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int*) malloc(tamanho * sizeof(int));

    for(int i = 0; i < tamanho; i++) {
        printf("Digite o valor %d do vetor: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    printf("Valores do vetor: ");
    for(int i = 0; i < tamanho; i++) printf("%d ", vetor[i]);

    pares(vetor, tamanho);

    free(vetor);

    getchar();
    return 0;
}