/*Faça um programa que use a função valorPagamento para determinar 
o valor a ser pago por uma prestação de uma conta. O programa 
deverá solicitar ao usuário o valor da prestação e o número de 
dias em atraso e passar estes valores para a função valorPagamento, 
que calculará o valor a ser pago e devolverá este valor ao 
programa que a chamou. O programa deverá então exibir o valor a 
ser pago na tela. Após a execução o programa deverá voltar a pedir 
outro valor de prestação e assim continuar até que seja informado 
um valor igual a zero para a prestação. Neste momento o programa 
deverá ser encerrado, exibindo o relatório do dia, que conterá a 
quantidade e o valor total de prestações pagas no dia. O cálculo do 
valor a ser pago é feito da seguinte forma. Para pagamentos sem atraso, 
cobrar o valor da prestação. Quando houver atraso, cobrar 
3% de multa, mais 0,1% de juros por dia de atraso.*/
#include <stdlib.h>
#include <string.h>

void valorPagamento(vlPrestacao, nuatraso, multa, juro);
float valorpagar = 0;
int main(){
    
    int vlPrestacao=1, nuatraso = 0, total = 0;
    float multa, juro, valorpagar=0;
    while(vlPrestacao != 0){
        
        system("cls");
        printf("\n\n*## CALCULO DE PRESTACOES ##*\n## PARA SAIR DIGITE '0' ##\n");
        printf("\nO valor da prestacao> ");
        scanf("%d", &vlPrestacao);
        
        if(vlPrestacao == 0){
            system("cls");
            printf("**** RELATORIO ****\n");
            printf("\nTotal de prestacoes: %d", total);
            printf("\nValor total: R$%.2f", valorpagar);
            printf("\nTchau!");
            exit(0);
            
        }
        printf("\nNumero de dias de atraso> ");
        scanf("%d", &nuatraso);
        valorPagamento(vlPrestacao, nuatraso, multa, juro);
        total++;
    }
}
void valorPagamento(vlPrestacao, nuatraso, multa, juro){
    if(nuatraso == 0){
        valorpagar += vlPrestacao;
    }
    else{
        multa = vlPrestacao * 0.03;
        juro = vlPrestacao * (0.001*nuatraso);
        valorpagar += vlPrestacao + multa + juro;
    }
}