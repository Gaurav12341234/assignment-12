//3. Write a recursive function to print first N odd natural numbers.
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
        fun(n-1);
        printf("%d ",2*n-1);
    }
}