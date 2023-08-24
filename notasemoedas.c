#include <stdio.h>

int main() {
    double valor;
    scanf("%lf", &valor);

    int notas[] = {100, 50, 20, 10, 5, 2};
    double moedas[] = {1, 0.50, 0.25, 0.10, 0.05, 0.01};

    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd_notas = valor / notas[i];
        printf("%d nota(s) de R$ %.2f\n", qtd_notas, (double)notas[i]);
        valor -= qtd_notas * notas[i];
    }

    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int qtd_moedas = valor / moedas[i];
        printf("%d moeda(s) de R$ %.2f\n", qtd_moedas, moedas[i]);
        valor -= qtd_moedas * moedas[i];
    }

    return 0;
}
