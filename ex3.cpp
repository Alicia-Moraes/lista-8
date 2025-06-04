#include <stdio.h>
#include <stdlib.h>

int main() {
    int* vetor = NULL;
    int entrada = 0, tamanho = 0;

    vetor = (int*) malloc(1 * sizeof(int));

    if(vetor == NULL) return 1;

    while(entrada != -1) {
        printf("Digite o valor %d do vetor (-1 para parar): ", tamanho + 1);
        scanf("%d", &entrada);
        getchar();
        if(entrada != -1) {
            tamanho++;
            vetor = (int*) realloc(vetor, tamanho * sizeof(int));
            vetor[tamanho - 1] = entrada;
        }
    }

    printf("Valores do vetor: ");
    for(int i = 0; i < tamanho; i++) printf("%d ", vetor[i]);

    free(vetor);

    getchar();
    return 0;
}