#include "Basic.h"


int Partition(int arr[],int l,int h)
{
    int i=l,j=h+1;
    int pivot=arr[l];
    while(i<j)
    {
        do
        {
            i++;
        } while (arr[i]<=pivot);
        do
        {
            j--;
        } while (arr[j]>pivot);
        if(i<j)
        {
            swap(&arr[i],&arr[j]);
        }
    }
    swap(&arr[j],&arr[l]);

    return j;
}

void QuickSort(int arr[],int l,int h)
{
    int j;
    if(l<h)
    {
        j=Partition(arr,l,h);
        QuickSort(arr,l,j);
        QuickSort(arr,j+1,h);
    }
}

int main()
{
    int arr[4]={4,3,2,1};

    display(arr,4);
    QuickSort(arr,0,3);
    display(arr,4);

    return 0;
}