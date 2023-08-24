#include <stdio.h>
int main() {
    int x, y;
    scanf("%d", &x);
    scanf("%d", &y);
    int aux;
    if (x > y) {
        aux = x;
        x = y;
        y = aux;
    }
    int i;
    int soma = 0;
    for (i = x; i <= y; i++) {
        if (i % 13 != 0) {
            soma += i;
        }
    }
    printf("%d\n", soma);
    return 0;
}
