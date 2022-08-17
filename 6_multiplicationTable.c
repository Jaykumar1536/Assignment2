//Write a C program to Display the Multiplication table of a Given integer.
#include <stdio.h>
void main(){
    int i,n1,mul;
    printf("Enter Multiplication Table Number: ");
    scanf("%d",&n1);
    i=1;
    while(i<=10){
        mul = n1*i;
        printf("\n%d X %d = %d",n1,i,mul);
        i++;
    }
}