#include<stdio.h>
#include<stdlib.h>

void push(int *);
void pop(int *);
void display(int *);
int SIZE;
int TOP=-1;
void main()
{
    int inLoop=1;
    int choice;
    int size;//WE TAKE THE SIZE OF STACK FROM THE USER
    int *arr;//THIS IS THE POINTER TO THE ARRAY WHICH WE WILL BE USING FOR IMPLEMENTATION OF ATCK.
    printf("Enter size: ");
    scanf("%d",&size);
    SIZE=size;
    arr=(int *) malloc(size * sizeof(int));
    //PROVIDING A LIST OF OPERATION THAT A USER CAN PERFORM
    while(inLoop)
    {
        printf("---------------------------------------------\n");
        printf("1. For Push.\n");
        printf("2. For Pop.\n");
        printf("3. Displaying Displaying The Stack.\n");
        printf("---------------------------------------------\n");
        printf("Enter choice: ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: {push(arr);break;}
            case 2: {pop(arr);break;}
            case 3: {display(arr);break;}
            default: {inLoop=0;}
        }
    }

}

void push(int *a)
{
    //CHECK IF STACK IS FULL
    if(TOP>=SIZE-1)
    {
        printf("\nStack Is Full!\n");
    }
    else
    {
        int value;
        printf("\nEnter Value: ");
        scanf("%d",&value);
        TOP++;
        *(a+TOP)=value;
    }
    printf("\n");
}
void pop(int *a)
{
    //CHECK IF STACK IS EMPTY
    if(TOP<0)
    {
        printf("\nStack Is Empty!\n\n");
    }
    else
    {
        TOP--;
        printf("\nElement Popped.\n\n");
    }
}

void display(int *a)
{
    //CHECK IF STACK IS EMPTY
    if(TOP<0)
    {
        printf("\nStack Is Empty!\n\n");
    }
    else
    {
        printf("\n");
        int i;
        for(i=0;i<=TOP;i++)
        {
            printf("%d\t",*(a+i));
        }
        printf("\n\n");   }
}
