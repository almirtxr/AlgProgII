#include <stdio.h>
int main() {
    int exp;
    int qtd;
    int totalC = 0, totalR = 0, totalS = 0, totalCobaias = 0;
    char cobaia;
    scanf("%d", &exp);
    for (int i = 0; i < exp; i++) {
        scanf("%d %c", &qtd, &cobaia);
        totalCobaias += qtd;
        if (cobaia == 'C') {
            totalC += qtd;
        } else if (cobaia == 'R') {
            totalR += qtd;
        } else if (cobaia == 'S') {
            totalS += qtd;
        }
    }
    printf("Total: %d cobaias\n", totalCobaias);
    printf("Total de coelhos: %d\n", totalC);
    printf("Total de ratos: %d\n", totalR);
    printf("Total de sapos: %d\n", totalS);
    double percentC = (double)totalC / totalCobaias * 100;
    double percentR = (double)totalR / totalCobaias * 100;
    double percentS = (double)totalS / totalCobaias * 100;
    printf("Percentual de coelhos: %.2lf %%\n", percentC);
    printf("Percentual de ratos: %.2lf %%\n", percentR);
    printf("Percentual de sapos: %.2lf %%\n", percentS);
    return 0;
}
