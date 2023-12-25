#include<stdio.h>
#include<string.h>
void main()
{
    char str[100],str2[100];
    printf("Enter any string :");
    scanf("%s",&str);
    printf("Enter any string :");
    scanf("%s",&str2);
    char og_str[100];
    strcpy(og_str,str);
    strrev(str);
    printf("%s\n",og_str);
    printf("%s\n",str);
    if(strcmp(og_str,str)==0)
    {
        printf("STRING IS A PALINDROME\n");
    }
    else
    {
        printf("STRING IS NOT A PALINDROME\n");
    }
    printf("Length of string is = %d\n",strlen(og_str));
    printf("concatenated strings are : %s\n",strcat(og_str,str2));
}