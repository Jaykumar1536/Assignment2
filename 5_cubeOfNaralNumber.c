//Write a C program to Display the cube of the Number upto given an integer.
#include <stdio.h>
void main(){
    int i,n,cube;
    printf("Enter Natural No.: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        cube = i*i*i;
        printf("\nNumber is: %d and cube is: %d",i,cube);
    }
}