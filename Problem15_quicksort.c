#include<stdio.h>
void quicksort(int[],int,int);
int partition(int [], int, int);
int main()
{
    int i=0;
    int a[] = { 24, 9, 29, 14, 19, 27 };
    //int a[]={2,5,1};
    int n = sizeof(a) / sizeof(a[0]);
    printf("Before so rting array elements are - \n");
    for(i=0;i<n;i++)
     {
         printf("%d\t",a[i]);
     }



    quicksort(a, 0, n - 1);
    printf("\nAfter sorting array elements are - \n");
     for(i=0;i<n;i++)
     {
         printf("%d\t",a[i]);
     }

    return 0;
}

void quicksort(int arr[],int start, int end)
{
    if(start<end)
    {
        int partitionIndex= partition(arr,start,end);
        quicksort(arr,start,partitionIndex-1);
        quicksort(arr,partitionIndex+1,end);
    }
}
int partition(int arr[], int start, int end)
{
    int pivot = start;
    int left=start;
    int right=end;
    while(!(pivot==left && pivot==right))
    {
        if(pivot==left)
        {
           //move from right
           if(arr[right]<arr[pivot])
           {
                //swap
                int temp=arr[pivot];
                arr[pivot]=arr[right];
                arr[right]=temp;
           }
           else
           {
               right--;
           }
        }
        else
        {
            if(arr[left]>arr[pivot])
            {
                //swap
                int temp=arr[pivot];
                arr[pivot]=arr[left];
                arr[left]=temp;

            }
            else
            {
                left++;
            }
        }
    }
    return pivot;
}
