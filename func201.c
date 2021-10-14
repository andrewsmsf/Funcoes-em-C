/*Faça um programa com uma função chamada somaImposto. 
A função possui dois parâmetros formais: taxaImposto, que é 
a quantia de imposto sobre vendas expressa em porcentagem e custo, 
que é o custo de um item antes do imposto. A função “altera” o 
valor de custo para incluir o imposto sobre vendas.*/
#include <stdlib.h>
void somaimposto(taxaimposto, custo);
int main(){
    float taxaimposto, custo;
    printf("A taxa de imposto: ");
    scanf("%f",&taxaimposto);
    printf("O custo: ");
    scanf("%f",&custo);
    somaimposto(taxaimposto, custo);
}
void somaimposto(taxaimposto, custo){
    float somaimposto = custo+ (custo*taxaimposto/100);
    printf("\nResultado %.2f", somaimposto);
}