#include<stdio.h>
#include<stdlib.h>


int main(){
    // Data type pointers
    int num = 54;
    int *pNum = &num + 1;
    void *pNUm2;

    //malloc() pointers returns a void pointer
    //We have to type cast it 
    int *ptr;
    ptr = (int*)malloc(3 * sizeof(int));
    int ptr1 = ptr+1;
    ptr1 = 2;
    printf("%d", *(ptr +1));
    return 0;
};