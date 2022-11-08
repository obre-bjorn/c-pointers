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


// Dynamic memory allocation using malloc(), calloc(), relloc().

//NB: You must include the stdlib.h header to use dynamic memory allocation functions. 
//The funtion usually return void pointers of which they have to be type casted for insatnce:
// (*int)malloc(sizeof(int)) in order to be initialized to a variable

//1. Using malloc() function
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

    //2. Using calloc function
    return 0;
}