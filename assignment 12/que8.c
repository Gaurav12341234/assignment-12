//8. Write a recursive function to print binary of a given decimal number.
#include<stdio.h>
void dtob(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    dtob(n);
    return 0;
}
void dtob(int n)
{
    if(n>0)
    {
        dtob(n/2);
        printf("%d",n%2);
    }
}