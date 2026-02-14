#include <stdio.h>

int main() {
    
    char str[100];
    int length=0,i=0;
    printf("enter a string\n");
    fgets(str,sizeof(str),stdin);
    while(str[i]!='\0')
    {
    if(str[i]!='\n')
    {
    length++;
    }
    i++;
    }
    printf("length of the string=%d",length);

    return 0;
}