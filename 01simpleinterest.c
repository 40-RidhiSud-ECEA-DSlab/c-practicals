#include <stdio.h>
void simpleinterest(int p, int r, int t)
{
    float si=1;
    si=(p*r*t)/100;
    printf("Simple interest is = %f",si);
}

void main()
{
    int p,r,t;
    printf("Enter principal: ");
    scanf("%d",&p);
    printf("Enter rate: ");
    scanf("%d",&r);
    printf("Enter time: ");
    scanf("%d",&t);
    simpleinterest(p,r,t);
}
