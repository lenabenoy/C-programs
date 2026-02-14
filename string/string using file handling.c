#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    printf("enter a string\n");
    fgets(str,sizeof(str),stdin);
    printf("%lu",strlen(str)-1);
    return 0;
    
    
}