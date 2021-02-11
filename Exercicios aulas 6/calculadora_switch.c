#include <stdio.h>
#include <stdlib.h>

void main(){
    float a,b;
    int c;
    printf("Welcome to this Calculator! \n Please Write the two numbers above: \n In this format: number1,number 2 \n");
    scanf("%f,%f",&a,&b);
    printf("Right! Now, choose the option that you want to operate:\n 1-Sum \n 2-Subtraction \n 3- Division \n 4-Multiplication  \n");
    scanf("%d",&c);
    switch(c){
        case 1:
            printf(" The result of Sum is %f",a+b);
            break;
        case 2:
            printf(" The result of Subtraction is %f",a-b);
            break;
        case 3:
            printf(" The result of Division is %f",a/b);
            break;
        case 4:
            printf(" The result of Multiplication is %f",a*b);
            break;
        default:
            printf("You've typed wrong, try again!");
            break;
    }
}