/*Faça um programa para imprimir:
    1
    2   2
    3   3   3
    .....
    n   n   n   n   n   n  ... n
para um n informado pelo usuário. Use uma função que receba um valor n inteiro e imprima até a n-ésima linha.
*/
#include <stdlib.h>
int main (){
    int valor;
    printf("Insira um numero para a piramide: ");
    scanf("%d", &valor);

    int j, i, cont;
    for(j = 0; j<= valor; j++){
        cont = 1;
        while ( cont < j+1){
            cont+=1;
            printf(" %d ", j);
        }
        printf("\n");
    }
}