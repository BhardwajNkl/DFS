#include<stdio.h>
#include<stdlib.h>
//DECLARATION OF OPERATIONS ON QUEUE.
void insert(int *);
void delete(int *);
void display(int *);

int SIZE;
int REAR=0;
void main()
{
    int inLoop=1;
    int choice;
    int size;
    int *arr;
    printf("Enter Size: ");
    scanf("%d",&size);
    SIZE=size;

    //PROVIDING MEMORY FOR QUEUE.
    arr=(int *) malloc(size * sizeof(int));

    //PROVIDING THE LIST OF OPERATIONS

    while(inLoop)
    {
        printf("1. For Insertion.\n");
        printf("2. For Deletion.\n");
        printf("3. For Display.\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: {insert(arr);break;}
            case 2: {delete(arr);break;}
            case 3: {display(arr);break;}
            default:{inLoop=0;}
        }
    }

}

void insert(int *a)
{
    //CHECKING IF QUEUE IS ALREADY FULL
    if(REAR>=SIZE)
    {
        printf("Queue is Full!\n");
    }
    else
    {
        int value;
        printf("Enter Value: ");
        scanf("%d",&value);
        *(a+REAR)= value;
        REAR++;
    }
}
void delete(int *a)
{
    // CHECKING IF THE QUEUE IS EMPTY
    if(REAR<=0)
    {
        printf("Queue Is Empty!\n");
    }
    else if(REAR==1)
    {
        REAR--;
    }
    else
    {
        int i;
        for(i=0;i<REAR-1;i++)
        {
            *(a+i)=*(a+i+1);
        }
        REAR--;
    }
}
void display(int *a)
{
    int i;
    for(i=0;i<REAR;i++)
    {
        printf("%d\t",*(a+i));
    }
    printf("\n");
}








