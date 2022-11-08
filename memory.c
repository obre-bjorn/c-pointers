#include<stdio.h>
#include<stdlib.h>


int main(){
// Static Memory Allocation
   /* int a,b;
    int marks[5] = {70,64,45,88,90};

    printf("Enter two values: ");
    scanf("%d%d" ,&a,&b);
    printf("a:%d, b:%d\n",a,b);
    */


// Dynamic memory allocation using malloc, calloc, 
//1. Using malloc
    int i,numbers,*ptr;
    ptr = (int*)malloc(numbers*sizeof(int));
    printf("Enter number of values: \n");
    scanf("%d",&numbers);

    for(i = 0; i < numbers; i++){
        scanf("%d",(ptr+i));
    };

    printf("The entered values are: ");
    for(i = 0; i<numbers; i++){
        printf("%d \t",*(ptr +i));
    };

    free(ptr);
    return 0;
}