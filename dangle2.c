#include<stdio.h>
#include<stdlib.h>

void main(){
    int n,*ptr,*ptr2;
    n = 4;
    ptr = (int*) malloc(4*sizeof(int));
    *ptr = 5566;
    printf("Pointer 1: %d \n",*ptr);
    free(ptr);
    ptr = NULL;
    ptr= &n;
    printf("Pointer 1: %d \n",*ptr);
}