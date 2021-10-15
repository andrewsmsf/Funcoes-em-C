#include<stdio.h>
void cubeByValue(int n);

int main(void){
    int number = 5;
    printf("O valor original do numero eh %d", number);

    number = cubeByValue( number );
    printf("\nO novo valor da numero eh %d\n", number);
    return 0;
}
void cubeByValue(int n){
    return n*n*n;
}