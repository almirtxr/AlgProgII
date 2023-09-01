#include <stdio.h>
int main(){
    float vet[100];
    int i,j;
    for (i=0;i<100;i++){
        scanf("%f", &vet[i]);
    }
    for(j=0;j<100;j++){
        if (vet[j] <=10){
            printf("A[%d] = %.1f\n", j, vet[j]);
        }
    }
    return 0;
}
