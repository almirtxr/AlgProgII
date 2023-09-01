#include <stdio.h>

int main() {
    int N[10];
    int tamanho = 10;
    int i,j,k;
    int temp;
    for (i = 0; i < tamanho; i++) {
        scanf("%d", &N[i]);
    }
    for (j = 0; i < tamanho / 2; j++) {
        temp = N[j];
        N[j] = N[tamanho - 1 - j];
        N[tamanho - 1 - j] = temp;
    }
    for (k = 0; k < tamanho; k++) {
        printf("N[%d] = %d\n", k, N[k]);
    }

    return 0;
}
