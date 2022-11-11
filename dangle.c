#include <stdio.h>
#include<stdlib.h>

int *func(){
    int a = 10;
    return &a;
}

int main(){
    int *ptr = func();
    printf("Address: %d", *ptr);
    return 0;
}