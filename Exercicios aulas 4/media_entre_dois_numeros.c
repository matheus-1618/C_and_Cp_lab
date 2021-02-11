#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main(){
    float a,b,k;
    setlocale(LC_ALL,"");
    printf("Write the first number:");
    scanf("%f",&a);
    printf("Write the second number:");
    scanf("%f",&b);
    k=(a+b)/2;
    printf("The media of those is %f",k);
}