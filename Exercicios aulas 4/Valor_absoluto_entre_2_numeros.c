#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    float a,b,c;
    printf("Digita ai o primeiro numero \n");
    scanf("%f",&a);
    printf("E o segundo, chefe?\n");
    scanf("%f",&b);
    c=fabs(a-b);//Função fabs(retorna o absoluto para float)
    printf("O valor absoluto é %f",c);
    
};