#include<stdio.h>
int fact(int a)
{
    if(a==1) return 1;
    else
    {
        return a*fact(a-1);
    }
}
void main()
{
    int num, factorial;
    printf("Enter a positive integer: ");
    scanf("%d",&num);
    factorial= fact(num);
    printf("Factorial is: %d",factorial);
}
