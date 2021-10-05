/*Faça um programa para imprimir:
    1
    1   2
    1   2   3
    .....
    1   2   3   ...  n
para um n informado pelo usuário. Use uma função que receba um valor n inteiro imprima até a n-ésima linha.*/
#include <stdlib.h>
int main(){
    int valor;
    printf("Digite um valor para a pirâmede: ");
    scanf("%d", &valor);

    for (int j = 1; j <= valor; j++){
        for(int i = 1; i <= j; i++){
            printf(" %d ", i);
        }
        printf("\n");
    }
}