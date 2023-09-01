#include <stdio.h>
int main(){
    int array[10];
    int i;
    for(i=0;i<10;i++){
        scanf("%d", &array[i]);
        if (array[i] == 0 || array[i] < 0){
            array[i] = 1;
        }
    }
    int j;
    for (j=0;j<10;j++){
        printf("X[%d] = %d\n", j, array[j]);
    }
    return 0;
}
