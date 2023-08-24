#include <stdio.h>
int main(){
    int cod, qtd;
    float preco;
    float valorTotal;
    int i;
    for(i=0;i<2;i++){
        scanf("%d %d %f", &cod, &qtd, &preco);
        valorTotal = valorTotal+(preco * qtd);
    }
    printf("VALOR A PAGAR: R$ %.2f\n", valorTotal);
}
