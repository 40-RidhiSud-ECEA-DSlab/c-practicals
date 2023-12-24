#include <stdio.h>
void average(int len,int arr[])
{
    int sum=0;
    float avg=1;
    for(int i=0;i<len;i++)
    {
        sum=sum+arr[i];
    }
    printf("\nsum=%d",sum);
    float size;
    avg*=sum/(float)len;
    printf("\nThe average of array is = %f",avg);
}
void min(int len,int arr[])
{
    int temp;
    temp=arr[0];
    for(int i=0;i<len;i++)
    {
        if(arr[i]<temp)
        {
            temp=arr[i];
        }
 
    }
    printf("\nSmallest number in the array is = %d\n",temp);
    
}
void max(int len,int arr[])
{
    int temp;
    temp=arr[0];
    for(int i=0;i<len;i++)
    {
        if(arr[i]>temp)
        {
            temp=arr[i];
        }
 
    }
    printf("\nLargest number in the array is = %d",temp);
    
}
void main()
{
    int len;
    
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
    average(len,arr);
    max(len,arr);
    min(len,arr);
}

