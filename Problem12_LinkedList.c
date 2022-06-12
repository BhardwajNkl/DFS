#include<stdio.h>
#include<stdlib.h>
typedef struct node{
int data;
struct node* next;
}node;

void InsertAtEnd();
void InsertAtStart();
void InsertAnyPosition();
void DeleteAtEnd();
void DeleteAtStart();
void DeleteByValue();
void Traverse();
void Update();
void Search();
void reverse();

node* head=NULL;
void main()
{
    int inLoop=1;
    //creating the head pointer that will point to the first node in the list.
    while(inLoop)
    {
       int choice;
       printf("1. for insertion at the end.\n");

       printf("2. for deletion at the end.\n");
       printf("3. for insertion at any position.\n");
       printf("4. for updating.\n");
       printf("5. for traversal.\n");
       printf("6. for insertion at the start.\n");
       printf("7. for deletion at the start.\n");
       printf("8. for search.\n");
       printf("9. for delete by value.\n");
       printf("10. for reversing the list.\n");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1: {InsertAtEnd();break;}//done
            case 2: {DeleteAtEnd();break;}//done
            case 3: {/*InsertAnyPosition();*/break;} //function not implemented
            case 4: {/*Update();*/break;} //function not implemented
            case 5: {Traverse();break;}//done
            case 6: {InsertAtStart();break;}//done
            case 7: {DeleteAtStart();break;}//done
            case 8: {Search();break;}//done
            case 9: {/*DeleteByValue();*/break;} //function not implemented
            case 10: {reverse();break;}
            default: inLoop=0;
        }
    }
}

void InsertAtEnd()
{
    int value;
    //create a new node
    node* newnode=(node*) malloc(sizeof(node));
    printf("enter value: ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=NULL;

    //if list is empty
    if(head==NULL)
    {
        head=newnode;
        return;
    }

    node *temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newnode;

}

void InsertAtStart()
{
    int value;
    //create  node
    node* newnode = malloc(sizeof(node));
    printf("Enter Value: ");
    scanf("%d",&value);
    newnode->data=value;
    newnode->next=head;
    head=newnode;

}

void DeleteAtEnd()
{
    //if list is empty
    if(head==NULL)
    {
        printf("List Is Empty.\n");
        return;
    }
    //if there is only one node
    if(head->next==NULL)
    {
        head=NULL;
        return;
    }

    node *temp = head;
    while(temp->next->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=NULL;
}

void DeleteAtStart()
{
    if(head==NULL)
    {
        printf("List Is Empty.\n");
        return;
    }
    head=head->next;
}


void DeleteByValue()
{
    int key;
    printf("Enter Key: ");
    scanf("%d",&key);
    node* temp=head;
    while(temp->next!=NULL)
    {

    }

}

void InsertAnyPosition()
{

}
void Update()
{

}
void Traverse()
{
    //
    if(head==NULL) printf("linked list is empty.\n");
    else
    {
        node * temp=head;
        while(temp->next!=NULL)
        {
            printf("%d\t",temp->data);
            temp=temp->next;
        }
        printf("%d\n",temp->data);
    }

}

void Search()
{
    int key;
    int position=0;
    printf("Enter Key: ");
    scanf("%d",&key);

    node* temp=head;
    while(temp!=NULL)
    {
        position++;
        if(temp->data==key)
        {
            printf("Found At Position %d\n",position);
            return;
        }
        temp= temp->next;
    }

    printf("Not Found.\n");
}

void reverse()
{
    //three pointers required
    node* prevnode=NULL;
    node* current = head;
    node* nextnode=NULL;

     while (current != NULL) {
        // Store next
        nextnode = current->next;
        // Reverse current node's pointer
        current->next = prevnode;
        // Move pointers one position ahead.
        prevnode = current;
        current = nextnode;
    }
    head = prevnode;
}
