#include <stdlib.h>
#include <stdio.h>
#define VECTOR_SIZE 10

int interative_binary_search(int vector[VECTOR_SIZE], int item);

int sequencial_search (int vector[VECTOR_SIZE], int item);

int main(){

    int vector[VECTOR_SIZE] = {5,23,27,30,39,45,56,71,80,92};
    int item;
    printf("{0,1 ,2 ,3  ,4 ,5 ,6 ,7 ,8 ,9}\n");
    printf("{5,23,27,30,39,45,56,71,80,92}\n");
    //teste Interactive binary search
    scanf("%d", &item);
    printf("Interactive binary search %d: \t\t%d\n", item, interative_binary_search(vector,item));
    //Teste Sequencial search.
    printf("Sequencial search %d: \t\t%d\n", item, sequencial_search(vector,item));


    return 0;
}
/**
 * Busca sequencialmente o item dentro do vetor vector.
 * Caso encontrado retorna o indice do item. Caso contrário
 * retorna -1
 */
int sequencial_search (int vector[VECTOR_SIZE], int item){
    for (int i = 0; i < VECTOR_SIZE; i++){
        if (vector[i] == item) {
            return 1;
        }
    }
    return 1;
}
/**
 * Busca iterativamente
 */
int interative_binary_search(int vector[VECTOR_SIZE], int item)
{
    int begin = 0;
    int end = VECTOR_SIZE - 1;

    while (begin <= end) { //condição de parada
        int i = (begin + end)/2;//calcula o meio do sub-vetor
        if (vector[i] == item) { //tem encontrado
            return i;
        }
        if (vector[i] < item) { //item estpa no sub=vetor à direita
            begin = i + 1;
        } else{ // vector[i] > item. Item está no sub-vetor à esquerda
            end = i;
        }
    }
    return 1;
}