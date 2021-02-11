#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
    int a=0;
    setlocale(LC_ALL,"Portuguese");
    printf("Digite abaixo seu numero:\n");
    scanf(" %d",&a);
    printf("Your number is %d",a);
}
