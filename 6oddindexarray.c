#include<stdio.h>
void main()
{
    int len;
    printf("Enter the length of array: ");
    scanf("%d",&len);
    int arr[len];
    printf("Enter the array: \n");
    for(int i=0;i<len;i++)
    {
        printf("Enter element a[%d]:",i);
        scanf("%d",&arr[i]);

    }
    printf("ORIGINAL ARRAY-");
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    printf("\nARRAY OF NUMBERS AT ODD INDEXES\n");
    for(int i=0;i<len;i++)
    {
        if(i%2==0)
        {
            continue;
        }
        else
        {
            printf("%d ",arr[i]);
        }
        
    }
}