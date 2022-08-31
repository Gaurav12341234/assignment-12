//9. Write a recursive function to print octal of a given decimal number.
#include<stdio.h>
void DtoO(int);
int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d",&n);
    DtoO(n);
    return 0;
}
void DtoO(int n)
{
    if(n>0)
    {
        DtoO(n/8);
        printf("%d",n%8);
    }
}