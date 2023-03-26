#include<stdio.h>
#include<stdlib.h>

typedef struct n
{
    int data;
    struct n* next;
}node;

node* front=NULL;
node* rear=NULL;

int isEmpty()
{
    if(front==NULL && rear==NULL)
    {
        return 1;
    }else
    {
        return 0;
    }
}

void insert(int val)
{
    node *p;
    p=(node *)malloc(sizeof(node));
    p->data=val;
    p->next=NULL;

    if(isEmpty())
    {
        front=rear=p;
        return;
    }
    rear->next=p;
    rear=p;
}
int delete()
{
    node* p;
    int x;
    if(isEmpty())
    {
        printf("Queue underflow!!!\n");
        return -1;
    }
    if(rear==front)
    {
        x=front->data;
        p=front;
        free(p);
        front=rear=NULL;
        return x;
    }
    x=front->data;
    p=front;
    front=front->next;
    free(p);
    return x;
}