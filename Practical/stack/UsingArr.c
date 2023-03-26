#include<stdio.h>
#define MAX_SIZE 6
int stack[MAX_SIZE];
int top=-1;

int isEmpty()
{
    if(top==-1)
    {
        return 1;
    }else
    {
        return 0;
    }

}

int pop()
{
    int x;
    if(isEmpty())
    {
        printf("Stack Underflow!!\n");
        return;
    }   
    x=stack[top];
    top--;
    return x;
}

void push(int val)
{
    if(top >= MAX_SIZE-1)
    {
        printf("Stack OverFlow!!\n");
        return;
    }
    top++;
    stack[top]=val;
}

void display()
{
    if(isEmpty())
    {
        printf("Stack is empty!!");
        return;
    }
    for(int i=top;i>=0;i--)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}