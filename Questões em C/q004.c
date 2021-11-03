/*Faça um programa, com uma função que necessite de um argumento (parâmetros). 
A função retorna o valor de caractere ‘P’, se seu argumento for positivo, e ‘N’, 
se seu argumento for zero ou negativo.*/
#include <stdlib.h>
int main(){
    float valor;
    printf("**POSITIVO OU NEGATIVO**\n");
    printf("Escreva um numero: ");
    scanf("%f", &valor);
    if(valor > 0){
        printf("\nEste valor eh 'P'.");
    }
    else{
        printf("\nEste valor eh 'N'.");
    }
}