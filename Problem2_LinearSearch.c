#include<stdio.h>
int main()
{
    int arr[20];
    int size;
    int key;
    int i;
    printf("Enter The Size Of Array: ");
    scanf("%d",&size);
    //reading array
    printf("Enter Array Elements.\n");
    i=0;
    while(i<size)
    {
        scanf("%d",&arr[i++]);
    }

    //reading the key
    printf("Enter The Key To Be Searched: ");
    scanf("%d",&key);

    //linear search logic
    for(i=0;i<size;i++)
    {
        if(arr[i]==key)
        {
            printf("found At Position %d\n",i+1);
            return 0;
        }
    }
    printf("not Found.\n");

}
