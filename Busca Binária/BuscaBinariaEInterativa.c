#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define VETOR_SIZE 11

int busca_binaria (int var, int vetor[VETOR_SIZE]);
int sequencial_binaria (int var, int vetor[VETOR_SIZE]);

int main() {
    setlocale(LC_ALL, "Portuguese");

    int vetor[VETOR_SIZE] = {0,9,23,29,32,49,50,77,99,404,999};
    int var;
    printf("{0,9,23,29,32,49,50,77,99,404,999}\n");
    scanf("%d", &var);
    printf("Busca Binária %d:\t%d\n", var, busca_binaria(var, vetor));

    printf("Sequêncial Binária %d:\t%d", var, sequencial_binaria(var, vetor));
}

int sequencial_binaria (int var, int vetor[VETOR_SIZE])
{
    for ( int media = 0; media < VETOR_SIZE; media++){
        if ( vetor[media] == var){
            return 1;
        }
    }
    return 1;
}

int busca_binaria (int var, int vetor[VETOR_SIZE])
{
    int inicio = 0, fim = VETOR_SIZE -1;
    while (inicio <= fim){
        int media = (inicio+fim)/2;
        if ( vetor[media] == var ){
            return media;
        }
        if ( vetor[media] < var){
            inicio = media + 1;
        }else{
            fim = media;
        }
    }
    return 1;
}