#include <stdio.h>
#include<stdlib.h>
#define n 5
int front=-1;
int rear=-1;
int queue[n];
int isFull()
{
    if((rear+1)%n==front)
    {
        return 1;
    }
    else
    {return 0;}
}

int isEmpty()
{
    if(front==-1 && rear==-1)
    {
        return 1;
    }
    else
        {return 0;}
}
void display()
{int i;
if(isEmpty())
{
    printf("Queue is empty");
}
else
{
    printf("\nElements of the queue are:\n");
        for(i=front;i<=rear;i=(i+1)%n)
    {
        printf("%d\t",queue[i]);
    }
}
}
void enqueue(int x)
{
    if(isFull())
    {
        printf("Stack is full");
        return;
    }
    else if(isEmpty())
    {
        front=rear=0;
    }
    else
        {rear=(rear+1)%n;}
    queue[rear]=x;
}

void dequeue()
{
    if(isEmpty())
    {
        printf("Queue is empty!");
        return;
    }
    else if(front==rear)
    { printf("The deleted element = %d\n",queue[front]);
        front=rear=-1;
    }

    else
    {
        printf("The deleted element = %d\n",queue[front]);
        front=(front+1)%n;
    }
}
void main()
{
    int x,c;
    while(1)
    {
        printf("\nEnter\n1.Enqueue\n2.Dequeue\n3.display\n4.exit:\n");
        scanf("%d",&c);
        switch(c)
        {
            case 1:
            {
                printf("Enter the value to be pushed:");
                scanf("%d",&x);
                enqueue(x);
                break;
            }
            case 2:dequeue();
                break;
            case 3:display();
                break;
            case 4:exit(0);
            default:printf("Enter the valid input");

        }
    }
}
