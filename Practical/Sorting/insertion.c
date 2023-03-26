#include "Basic.h"

void InsertionSort(int arr[],int n)
{
    int x,j;
    for(int i=0;i<n;i++)
    {
        x=arr[i];
        j=i-1;
        while (j!=-1 && arr[j]>x)
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=x;
    }
}
    
int main()
{
    int arr[4]={4,3,2,1};
    
    display(arr,4);
    InsertionSort(arr,4);
    display(arr,4);

    return 0;
}