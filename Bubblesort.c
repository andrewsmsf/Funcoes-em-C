#include <stdlib.h>
#include <stdio.h>
int main(){
    
    int i, variaveis, qtdVal;
    int qtd[variaveis];
   
    printf("### PARA SAIR DIGITE '-1' ###");
    printf("\nDigite valores inteiros\n> ");
    
    for(i = 0; ;i++){
        scanf("%d", &variaveis); 
        qtdVal = i;  
        qtd[i] = variaveis;
        if(variaveis == -1){
            printf("Suas variaveis:\n");
            int j;
            for(j = 0; j <= i-1; j++){
                printf("%d \n", qtd[j]);
            }

            int temp;
            int sla;
            int i;
            for(sla = 1; sla < qtdVal-1; sla++){
              for(i = 0; i < qtdVal-1; i++){
                if(qtd[i]>qtd[i+1]){
                  temp = qtd[i];
                  qtd[i] = qtd[i+1];
                  qtd[i+1] = temp;
                }
              }
            }
            printf("\nDepois da operacao:\n");
            for(j = 0; j <= i; j++){
                printf("%d \n", qtd[j]);
            }
            break;
        }
    }
}