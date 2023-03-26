#include "Basic.h"

void Merge(int A[],int l, int mid, int h)
{
    int i=l,j=mid+1;
    int k=l,B[h+1];

    while (i<=mid && j<=h)
    {
        if(A[i]<B[j])
        {
            B[k++]=A[i++];
        }
        else
        {
            B[k++]=A[j++];
        }
    }
    while (j<=h)
    {
        B[k++]=A[j++];
    }
    while (i<=mid)
    {
        B[k++]=A[i++];
    }
    for(int a=l;a<=h;a++)
    {
        A[a]=B[a];
    }
}

int MergeSort(int arr[],int l,int h)
{
    if(l<h)
    {
        int mid=(l+(h-1))/2;

        MergeSort(arr,l,mid);
        MergeSort(arr,mid+1,h);

        Merge(arr,l,mid,h);
    }

}

int main()
{
    int arr[4]={4,3,2,1};

    display(arr,4);
    MergeSort(arr,0,3);
    display(arr,4);
    
    return 0;
}