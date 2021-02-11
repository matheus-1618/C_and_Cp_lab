#include <stdio.h>
#include <stdlib.h>
#define A 10

void main(){
    int i=0;
    printf("Contando os numeros com while");
    while(i<=A){
        printf("\n%d",A-i);
        i++;
    };
    int i1=0;
    printf("Contando os numeros com for");
    for(i1;i1<=A;i1++){
        printf("\n%d",A-i1);
    };
    int i2=0;
    printf("Contando os numeros com Do while");
    do{
        printf("\n%d",A-i2);
        i2++;
    }while(i2<=A);
}
