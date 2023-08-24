#include <stdio.h>
int main() {
    char nome[50];
    double salario;
    double vendas;
    int i;
    scanf("%s", &nome);
    scanf("%lf", &salario);
    scanf("%lf", &vendas);
    double salarioTotal;
    salarioTotal = 15*(vendas/100);
    salario = salarioTotal+salario;
    printf("TOTAL = R$ %.2lf\n", salario);
    return 0;
}
