#include<stdio.h>
void cubeByReference(int *nPtr);
void cubeByVariavel(int nPtr);
int cubeByReturn(int nPtr);
int main(){
    int number = 5;
    printf("O valor original do numero eh %d", number);

    //cubeByReference(&number);
    //cubeByVariavel(number);
    number = cubeByReturn( number );
    printf("\nO novo valor da numero eh %d\n", number);
    return 0;
}
void cubeByReference(int *nPtr){
    *nPtr = *nPtr * *nPtr * *nPtr;
}
void cubeByVariavel(int nPtr){
    nPtr = nPtr * nPtr * nPtr;
}
int cubeByReturn(int nPtr){
    nPtr = nPtr * nPtr * nPtr;
    return nPtr;
}