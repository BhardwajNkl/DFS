#include<stdio.h>
void mergesort(int[], int, int);
void merge(int[], int, int, int);

int main()
{
    int i;
    int arr[10]={23,1,89,18,34,22,100,56,29,40};
    int size = sizeof(arr)/sizeof(arr[0]);
    mergesort(arr,0,size-1);
    for(i=0;i<size;i++) printf("%d\t",arr[i]);

}
void mergesort(int a[], int low, int high)
{
    if(low<high)
    {
        int mid=(low+high)/2;
        mergesort(a,low,mid);
        mergesort(a,mid+1,high);
        merge(a,low,mid,high);
    }
}
void merge(int a[], int low, int mid, int high)
{
    int i;
    int j;
    int k;
    int n1=mid-low+1;
    int n2=high-mid;
    int temp1[n1];
    int temp2[n2];

    //copy data to temp1
    for(i=0;i<n1;i++)
    {
        temp1[i]=a[low+i];
    }
    for(i=0;i<n2;i++)
    {
        temp2[i]=a[mid+1+i];
    }

    i=0,j=0; //for moving in the two sub arrays
    k=low;//for storing the result of merging in the main array
    while(i<n1 && j<n2)
    {
        if(temp1[i]<temp2[j])
        {
            a[k++]=temp1[i++];
        }
        else if(temp2[j]<temp1[i])
        {
            a[k++]=temp2[j++];
        }
        else{
            a[k++]=temp1[i++];
            a[k++]=temp2[j++];
        }
    }
    //copy remaining items from temp1
    while(i<n1){
        a[k++]=temp1[i++];
    }
    while(j<n2)
    {
        a[k++]=temp2[j++];
    }

}
