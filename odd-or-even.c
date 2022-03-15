#include<stdio.h>
#include<stdlib.h>

int main(){

    int number;

    printf("Please enter a number you want to query whether it is odd or even: ");
    scanf("%d",&number);

    if(number % 2 == 0){ 
        printf("Input number is even number");
    }else{
        printf("Input number is odd number");
    }

    return 0;
}