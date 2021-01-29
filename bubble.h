//
//  bubble.h
//  First arg
//
//  Created by Mingmanas Sivaraksa on 2/1/2564 BE.
//

#ifndef bubble_h
#define bubble_h
#include "swap.h"
//display function
void display(int *value, int N)
{
    int i;
    for(i=0;i<N;i++)
    {
        printf("%5d",value[i]);
    }
    printf("\n");
}

//bubble sort function
void bubble(int *a, int N)
{
    int i;
    int j;
    for (i = N - 1; i > 0; i--)
    {
        int sorted;
        sorted=0;
        for (j = 0; j < i; j++)
        {

            if( *(a+j) > *(a+j+1) ){ // decending
            swap(a+j,a+j+1);
            sorted=1;}
        }
        if(sorted==0)
            break; //break when all number are sorted
            display(a,N);
    }
}
#endif /* bubble_h */
