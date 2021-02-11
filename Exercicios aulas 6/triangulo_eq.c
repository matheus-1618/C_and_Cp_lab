#include <stdio.h>
#include <stdlib.h>

void main(){
    float a,b,c;
    printf("Write the three values of its triangule, following the example above: \n value1,value2,value3 \n");
    scanf("%f,%f,%f",&a,&b,&c);
    if (a==b && b==c){
        printf("Its can be a equilater");
    } 
    else{
        printf("It's not a equilater");
    }
}