#include <stdio.h>
#include <stdlib.h>
#include <locale.h>


void main(){
    setlocale(LC_ALL,"");
    float a,b,c,d;
    printf("Write your three grades, use conma after each number, except the last one.");
    scanf("%f,%f,%f",&a,&b,&c);
    d=(a+b+c)/3;
    if (d>=7){
        printf("You're approved!");
    }
    else{
        printf("You're reproved.");
    };
}