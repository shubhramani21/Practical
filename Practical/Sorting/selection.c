#include "Basic.h"

void SelectionSort(int arr[],int n)
{
    int i,j,min;

    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if (arr[j]<arr[min])
            {
                min=j;
            }
        }
        swap(&arr[min],&arr[i]);
    }

}

int main()
{
    int arr[4]={4,3,2,1};

    display(arr,4);
    SelectionSort(arr,4);
    display(arr,4);
    
    return 0;
}