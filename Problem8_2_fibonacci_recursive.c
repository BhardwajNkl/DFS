#include<stdio.h>
long int fibonacci_term(int a)
{
    if(a==1) return 0;
    else if(a==2) return 1;
    else
    {
        return fibonacci_term(a-1)+fibonacci_term(a-2);
    }
}
void main()
{
    int i;
    int term_no;
    long int term;
    printf("Which term do you want? ");
    scanf("%d",&term_no);
    term = fibonacci_term(term_no);
    printf("%li\t",term);


}
