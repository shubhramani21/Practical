#include <stdio.h>
#include "Basic.h"

void BubbleSort(int arr[],int n)
{
    int i,j,flag;

    for(i=0;i<n-1;i++)
    {
        flag=0;
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(&arr[j],&arr[j+1]);
                flag=1;
            }
        }
        if(!flag)
        {
            break;
        }
    }
}

int main()
{
    int arr[4]={4,3,2,1};
    
    display(arr,4);
    BubbleSort(arr,4);
    display(arr,4);

    return 0;
}