#include <stdio.h>  // Header file inclusion
# define N 10      // Macro definition

int addNums(int* a,int numvals){
    int i;
    int sum;
    sum=0;
    for (i=0;i<numvals;i++){
        sum=sum + a[i];
    }
    return sum;
}



/**
 * the top level function that is automatically called when program starts executing
 */ 

int main(void){
    int a[N]={3,2,5,7,1,4,2,3,6,9}; // variable declaration and initialization
    printf("Sum = %d\n", addNums(a,N));

    return 0;
}