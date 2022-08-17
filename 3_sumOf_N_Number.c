//Write a C program to Display n term of natural number and their sum.
#include <stdio.h>
void main(){
    int i,sum,n;
    printf("Enter Natural Number: ");
    scanf("%d",&n);
    sum = 0;
    printf("The first %d natural number is: ",n);
    for(i=1;i<=n;i++){
        sum += i;
        printf("%d,",i);
    }
    printf("\nThe Sum is: %d",sum);
}