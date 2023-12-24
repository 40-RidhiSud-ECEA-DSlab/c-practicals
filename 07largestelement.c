#include <stdio.h>
void main()
{
    int len;
    int temp=0;
    printf("Enter the length of a array: ");
    scanf("%d",&len);
    int arr[len];
    printf("Enter the array: \n");
    for(int i=0;i<len;i++)
    {
        printf("enter the element a[%d]: ",i);
        scanf("%d",&arr[i]);
    }
    printf("\nARRAY\n");
    for(int i=0;i<len;i++)
    {
        printf("%d ",arr[i]);
    }
    for(int i=0;i<len;i++)
    {
        if(arr[i]>=temp)
        {
            temp=arr[i];
        }
        
    }
    printf("\nLargest number is= %d",temp);
}
