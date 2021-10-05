/*Faça um programa, com uma função que necessite de três argumentos (parâmetros), e que forneça a soma desses três argumentos.*/
#include <stdlib.h>
int main (){
    int v1,v2,v3;
    printf("Informe o primeiro valor: ");
    scanf("%d",&v1);
    printf("Informe o segundo valor: ");
    scanf("%d",&v2);
    printf("Informe o terceiro valor: ");
    scanf("%d",&v3);

    int soma = 0;
    soma = soma+(v1+v2+v3);
    printf("\nA soma dos 3 valores eh: %d", soma);
}