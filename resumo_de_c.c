//Bibliotecas para escrever na tela
#include <stdio.h>
//biblioteca para gerar numeros
#include <stdlib.h>

//declarando um inteiro
int a= 5;

//declarando um float
float a=6;

//declarando uma letra 
char letra ='t';
//Sempre utilziar o comando fflush(stdin) par alimpar o buffer

//printando valores 
printf('something');

//input, utilziar, em caso de numero o caractere &
int a=0;
scanf("%d",&a);//%d para inteiro e %f para float

//para C, gerando funções básicas de desenvolvimento
void main(){
    //Aqui vai o código
};

int main(){
    //Aqui vai o código
    return 0//condição intrinseca para uma função inteira
}

//Para Gerar um valor absoluto em alguma operação
abs(12)//Para inteiro em C, para C++ serve tambem para float
fabs(-15.5)//Para um float em C

//Trabalhando com condicionais
//Declaração similar ao utlizado em Javascript
//PAdrão de lógica programacional
if(condition utilized){
    //Parte do código onde iremos trabalhar
};
//Exemplo de código:
#include <stdio.h>
#include <Stdlib.h>
void main(){
    int a;
    printf("Write here this shit:");
    scanf("%d",&a);
    if(a>10 && a<20){
        printf("Yes, the number is %d",a);
    }
    else if(a>=20){
        printf("The number is bigger than 20");
    }
    else{
        printf("KKK its your problem now");
    };

//Operadores matemáticos
=//Recebe
==//Igualdade
!=//Diferente
>=//maior ou igual
<=//menor ou igual

//Operadores lógicos
&&//"and" do python
||//"or" do python

//Booleanas
//importar biblioteca:
#include <stdbool.h>
bool a=true, b=false;

//Condicional Switch Case
//Precisamos analisar os casos já definidos
switch(condição escolhida){
    case 1:
    //Ao inves de 1 pode-se escolher qualquer outra condição
    //Possível para entrada do caso
    printf("Anything");
    break;

    default:
    //Caso genérico, similar ao else
    printf("anything");
    break;

}

//Gerando numeros aleatorios em C
#include <time.h> //Nova biblioteca
void main(){
    //alimentando o rand aleatoriamente
    srand((unsigned)time(NULL));

    //Variável que recebe o numero aletaroio
    int something= rand();
    printf("%d",something);//Gera o número aleatorio

    //Para limitar o range desse ponto
    //Por exemplo até o 5
    int something1= rand() % 5 ;
    printf("%d",something1);//Gera o número aleatorio
    //Para limitar alguns números basta somar o a quantidade de números
    //por exemplo entre 2 e 5
    int something2=(rand() % 3)+2 ;
    printf("%d",something2);//Gera o número aleatorio
}

//Laços de repetição

//while
int a= 13;
while (a<30){
    printf("\n %d",a);
    a=a+1;
}
//exemplo de código:
void main(){
    int a=0;
    int b=1;
    printf("Wich number do you desire to count? \n");
    scanf("%d",&a);
    printf("Iniciando a contagem... \n");
    while(b<=a){
        printf("...%d",b);
        b+=1;
    }
}

//Laço Do while
//Estrutura similar, basta colocar do antes, e definir 
//o escopo do código e um while com a condição de seguimento após
void main(){
    int a=0;
    int b=1;
    printf("Wich number do you desire to count? \n");
    scanf("%d",&a);
    printf("Iniciando a contagem... \n");
    do{
        printf("...%d",b);
        b+=1;
    }while(b<=a);
}

//Laço for
//define-se o valor inicial, até onde rodar, e a adição do parametro
//exemplo de código
void main(){
    int i;
    for(i=1;i<=10;i+=1){
        printf("...%d",i);
    }
}


//Criar laços de repeteição em menus, similar
//ao while true em python, estabelecer a sua condição

//Criando constantes 
#define TAM 10 
//printando a constante
printf("%d",TAM)

//Definir,acessar, percorrer vetores
//vetores servem para se trabalahr com uma variável
//que armazena várias variaveis dentro, como uma "gaveta"
int vetor[3];//definindo o vetor e a quantidade de variáveis possíveis de serem guardadas
//passando valores para o vetor
//parece com listas
vetor[0]=1;
vetor[1]=4;
vetor[2]=15;

//criando strings
//declara-se
char word[20];
//instrução
printf("Digita algo ai");
//limpando o buffer
setbuf(stdin,0);
//lendo a string
fgets(word,20,stdin);
//limpando a memória do não necessário
word[strlen(word)-1]='\0';
//printando o necessário
printf("%s",word);