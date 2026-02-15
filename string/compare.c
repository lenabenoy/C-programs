// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i=0,flag =1;
    // Write C code here
    char str1[100],str2[100];
    printf("enter the first string\n");
    fgets(str1,sizeof(str1),stdin);
    printf("enter the second string\n");
    fgets(str2,sizeof(str2),stdin);
    while(str1[i]!='\0'||str2[i]!='\0')
    {
        if(str1[i]!=str2[i])
        {
            flag=0;
            break;
        }
        i++;
    }
    if(flag==1)
    printf("both strings are equal");
    else
    printf("both strings are not equal");


    return 0;
}