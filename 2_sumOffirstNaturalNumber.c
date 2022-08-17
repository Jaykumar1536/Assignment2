//Write a C program to find the sum of first 10 Natural Numbers.
#include <stdio.h>
void main(){
    int i,sum;
    i=1;
    sum = 0;
    printf("The First 10 nutural number is: ");
    while(i<=10){
        printf("%d,",i);
        sum += i;
        i++;
    }
    printf("\nThe Sum is: %d",sum);
}