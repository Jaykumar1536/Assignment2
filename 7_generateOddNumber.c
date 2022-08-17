/*Write a C Program to Display the n terms of odd 
natural number and their Sum.*/
#include <stdio.h>
void main(){
    int i,n,odd,sum;
    printf("How many Generate Odd Natural Number and Total Sum: ");
    scanf("%d",&n);
    sum = 0;
    printf("How many Generate The odd Numbers are:");
    for(i=0;i<n;i++){
        odd = 2*i+1;
        sum += odd;
        printf("%d,",odd);
    }
    printf("\nThe Sum of odd Natural Number upto %d terms: %d",n,sum);
}