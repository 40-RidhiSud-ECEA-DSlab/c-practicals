#include <stdio.h>
void main()
{
    int n;
    printf("Enter any number: ");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("Entered number is even.");
    }
    else
    {
        printf("Entered number is odd.");
    }
}