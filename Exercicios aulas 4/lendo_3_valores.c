#include <stdio.h>
#include <stdlib.h>

void main(){
    float a,b,c,d;
    printf("Write the three values in sequence...\n (OBS:Uses conma after write your number,except the last one):\n");
    //Escrever utilizando a separação de vírgulas
    scanf("%f,%f,%f",&a,&b,&c);
    d=a*b*c;
    printf("The result is %f",d);
}