#include <stdio.h>
#include <stdlib.h>

void main(){
    int a,i=2;
    while (a != 0){
        printf("\nDigita ai seu valor (Escreva 0 para sair):\n");
        scanf("%d",&a);
        if (a==1){
            printf("\n 1 nao e primo");
        }
        else if (a==0){
            printf("Obrigado por participar");
        }
        else if (a%2==0){
            if(a==2){
                printf("\n 2 e o unico par que e primo");
            }
            else{
                printf("%d Nao e primo",a);
            } 
        }
        else{
            for(i;i<a;i++){
                if(a%i==0){
                    printf("%d nao e primo, por que e divisel tambem por %d e %d",a,i,a/i);
                    break;
                }
                else if (i==a-1){
                        printf("%d e primo",a);
                        break;
                    }
                else{
                    continue;
                }
            }
        }  
    }
}
