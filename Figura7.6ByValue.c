#include<stdio.h>
int cubeByValue(int n);

int main(void){
    int number = 5;
    printf("O valor original do numero eh %d", number);

    number = cubeByValue( number );
    printf("\nO novo valor da numero eh %d\n", number);
    return 0;
}
int cubeByValue(int n){
    return n*n*n;
}