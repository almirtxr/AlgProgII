#include <stdio.h>
int main(){
    float km, gas;
    scanf("%f", &km);
    scanf("%f", &gas);
    float consumo;
    consumo = km/gas;
    printf("%.3f km/l\n", consumo);
    return 0;
}
