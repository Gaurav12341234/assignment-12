//4. Write a recursive function to print first N odd natural numbers in reverse order.
#include<stdio.h>
void fun(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    fun(n);
    return 0;
}
void fun(int n)
{
    if(n>0)
    {
        printf("%d ",2*n-1);
        fun(n-1);
    }
}