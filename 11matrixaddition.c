#include <stdio.h>

void printMatrix(int a[3][3],int b[3][3]);
void addMatrix(int a[3][3],int b[3][3]);



void printMatrix(int a[3][3],int b[3][3])
{
    int i,j;
    printf("first matrix-\n");
     for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]);

        }
        printf("\n");
    }
    printf("second matrix-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",b[i][j]);

        }
        printf("\n");
    }
}
void addMatrix(int a[3][3],int b[3][3])
{
    int i,j;
    printf("addition of two matrices-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}
int main()
{
    int arr[3][3];
    int brr[3][3];
    int i,j;
    printf("Enter first array-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter a[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    printf("Enter second array-\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("enter b[%d][%d]: ",i,j);
            scanf("%d",&brr[i][j]);
        }
    }
    printMatrix(arr,brr);
    addMatrix(arr,brr);
    
    return 0;
}

