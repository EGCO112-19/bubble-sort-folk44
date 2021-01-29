#include <stdio.h>
#include <stdlib.h>
#include "bubble.h"
#include "swap.h"

void main()
{
    int i,j,k,N,sorted=0;
    int *a;
    //get amount of number
    printf("How many numbers: ");
    scanf("%d",&N);
    //reserve memory and get all numbers
    a=(int*)malloc(sizeof(int)*N);
    printf("\nInput numbers\n");
    for(i=0;i<N;i++)
    {
        printf("Number %d: ",i+1);
        scanf("%d",a+i);
    }
    bubble(a,N); //sorting and display all numbers

}
