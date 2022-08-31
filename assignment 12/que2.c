//2. Write a recursive function to print first N natural numbers in reverse order.
#include<stdio.h>
void PrintN(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    PrintN(n);
    return 0;
}
void PrintN(int n)
{
    if(n>0)
    {
        printf("%d ",n);
        PrintN(n-1);
    }
}