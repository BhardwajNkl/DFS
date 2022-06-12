#include<stdio.h>
int fibonacci_term(int a)
{
    int i;
    int t1=0;
    int t2=1;
    int next;
    for(i=3;i<=a;i++)
    {
       next=t1+t2;
       t1=t2;
       t2=next;
    }
    return next;
}
void main()
{
    int term_no;
    int term;
    printf("Which term do you want? ");
    scanf("%d",&term_no);
    term = fibonacci_term(term_no);
    printf("The term is %d",term);

}
