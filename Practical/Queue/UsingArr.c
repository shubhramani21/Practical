#include <stdio.h>
#define MAX_SIZE 5

int Queue[MAX_SIZE];
int rear=-1,front=-1;

int IsEmpty()
{
    if(rear==-1 && front==-1)
    {
        return 1;
    }else
    {
        return 0;
    }
}

void insert(int val)
{
    if(rear==MAX_SIZE-1)
    {
        printf("Queue Overflow!!");
        return;
    }
    if(IsEmpty)
    {
        front++;
    }
    rear++;
    Queue[rear]=val;
}

int delete()
{
    int x;

    if(IsEmpty || rear<front)
    {
        printf("Queue Underflow!!");
        return -1;
    }

    x=Queue[front];
    front++;

    return x;
}

void display()
{
    if(IsEmpty || rear<front)
    {
        printf("Queue is Empty.\n");
        return; 
    }
    for(int i=front;i<=rear;i++)
    {
        printf("%d ",Queue[i]);
    }
    printf("\n");
}