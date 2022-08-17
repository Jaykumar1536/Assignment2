//Write a C program to read 10 numbers from keyboard and find their sum and Average.
#include <stdio.h>
void main(){
    float i,n,sum;
    printf("Enter Natural Number: ");
    scanf("%f",&n);
    sum = 0;
    for(i=1;i<=n;i++){
        sum += i;
    }
    printf("\nThe Sum is: %f",sum);
    printf("\nThe Average is: %f",sum/n);
}