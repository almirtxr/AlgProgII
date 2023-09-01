#include <stdio.h>
int main(){
    int array[10];
    int i;
    int n;
    scanf("%d", &n);
    array[0] = n;
    printf("N[%d] = %d\n", i, array[0]);
    for (i=1;i<10;i++){
        array[i] = array[i-1] * 2;
        printf("N[%d] = %d\n", i, array[i]);
    }
    return 0;
}
