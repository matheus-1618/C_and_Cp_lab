#include <stdio.h>
#include <stdlib.h>

void main(){
    printf("Printando os numeros pares:\n");
    int a=10;
    for(a;a<=20;a++){
        if (a%2==0){
            printf("%d",a);
        }
        else{
            printf("\n");
        }
    }
}