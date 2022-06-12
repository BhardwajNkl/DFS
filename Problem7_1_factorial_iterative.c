#include<stdio.h>
int fact(int a)
{
    int i;
    int result=1;
    for(i=1;i<=a;i++)
    {
       result*=i;
    }
    return result;
}
void main()
{
    int num, factorial;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    factorial= fact(num);
    printf("Factorial is: %d",factorial);
}
