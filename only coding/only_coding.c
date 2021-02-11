//Here I've coding part of my learning time of C and C++
//so, why the biggest part of the document is commented.


#include <stdio.h>
#include <Stdlib.h>

// void main(){
//     int a;
//     printf("Write here this shit:");
//     scanf("%d",&a);
//     if(a>10 && a<20){
//         printf("Yes, the number is %d",a);
//     }
//     else if(a>=20){
//         printf("The number is bigger than 20");
//     }
//     else{
//         printf("KKK its your problem now");
//     }
//     // system("pause");
// }

#include <time.h> //Nova biblioteca
// void main(){
//     //alimentando o rand aleatoriamente
//     srand((unsigned)time(NULL));

//     //Variável que recebe o resto da divisão do numero por 3
//     int something= rand();
//     printf("is %d",something);
// }

// void main(){
//     int a=0;
//     int b=1;
//     printf("Wich number do you desire to count? \n");
//     scanf("%d",&a);
//     printf("Iniciando a contagem... \n");
//     while(b<=a){
//         printf("...%d",b);
//         b+=1;
//     }
// }

// void main(){
//     int a=0;
//     int b=1;
//     printf("Wich number do you desire to count? \n");
//     scanf("%d",&a);
//     printf("Iniciando a contagem... \n");
//     do {
//         printf("...%d",b);
//         b+=1;
//     }while(b<=a);
// }

// void main(){
//     int i;
//     for(i=1;i<=10;i+=1){
//         printf("...%d",i);
//     }
// }

// void main(){
//     int a,b,c,vet[3];
//     printf("Write below the values of your vector:\n");
//     scanf("%d,%d,%d",&a,&b,&c);
//     vet[0]=a;
//     vet[1]=b;
//     vet[2]=c;
//     printf("Certo os valores do seu vetor are %d,%d e %d",vet,vet[1],vet[2]);
// }
void main(){
char word[20];
//instrução
printf("Digita algo ai: \n");
//limpando o buffer
setbuf(stdin,0);
//lendo a string
fgets(word,20,stdin);
//limpando a memória do não necessário
word[strlen(word)-1]='\0';
//printando o necessário
printf("%s",word);
}