#include <stdio.h>
void sumofnos()
{
    int n;
    printf("Enter the ending value: ");
    scanf("%d",&n);
    int sum=0;
    for(int i=1;i<=n;i++)
    {
        sum=sum+i;
    }
    printf("Sum of %d natural numbers is = %d",n,sum);
}
void main()
{
    sumofnos();
}
