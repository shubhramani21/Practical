#include<stdio.h>

int BinarySearch(int arr[],int l,int h,int key)
{
    int mid;
    if(l==h)
    {
        if(arr[l]==key)
        {
            return l;
        }else
        {
            return -1;
        }
    }else
    {
        mid=(l+h)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        if(key<arr[mid])
        {
            return BinarySearch(arr,l,mid-1,key);
        }else
        {
            return BinarySearch(arr,mid+1,h,key);
        }
    }
}