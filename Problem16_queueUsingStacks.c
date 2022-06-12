#include<stdio.h>
#define size 5
void push(int[],int* ,int);
int pop(int[],int*);
void enqueue();
void dequeue();
void display();

int stack1[size];
int stack2[size];
int top1=-1;
int top2=-1;

int main()
{
    int inLoop=1;
    int choice;
    while(inLoop==1)
    {
        printf("1. for Enqueue.\n");
        printf("2. for Dequeue.\n");
        printf("3. for traversal.\n");
        printf("Enter Option: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:{
                 enqueue();
                break;
            }
            case 2:{
                 dequeue();
                break;
            }
            case 3:{
                display();
                break;
            }
            default:{
                inLoop=0;
            }

        }

    }
}
void push(int a[], int* top , int item)
{
    if(*top<size-1)
    {
        *top = *top+1;
        a[(*top)]=item;
    }
}
int pop(int a[], int* top)
{
    if(*top>-1)
    {
        //return the element
        int item = a[(*top)];
        *top=*top -1;
        printf("popped\n");
        return item;
    }
}

void enqueue()
{
    if(top1==size-1)
    {
        printf("queue Is Full.\n");
    }
    else
    {
        int item;
        printf("Enter Element: ");
        scanf("%d",&item);
        push(stack1,&top1,item);
    }
}

void dequeue()
{
    if(top2>-1)
    {
        pop(stack2, &top2);

    }
    else if(top1 > -1)
    {
        //pop items from stack1 and push them to stack2. now, pop from stack2.
        int item;
        while(top1>=0)
        {
            item=pop(stack1, &top1);
            push(stack2, &top2,item);
        }
        pop(stack2,&top2);
    }
    else
    {
        printf("empty.\n");
    }
}
void display()
{
    int t1=top1;
    int i=0;
    int t2=top2;

    while(t2 > -1)
    {
        printf("%d\t",stack2[t2]);
        t2--;
    }
    while(i<=t1)
    {
        printf("%d\t",stack1[i]);
        i++;
    }
}
