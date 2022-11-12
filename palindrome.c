#include <stdio.h>
#include <stdlib.h>

void main(){
    int number,quotient,remainder,result=0;
    printf("Enter a Number:\n");
    scanf("%d", &number);
    quotient = number;
    while(quotient > 0){
        remainder = quotient % 10;
        result = (result*10) + remainder;
        quotient = quotient/10;
    }
    if(number == result){
        printf("%d is a palindrome number!", number);
    }else{
        printf("%d is not a palindrome number!", number);
    }
}