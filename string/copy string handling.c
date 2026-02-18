// Online C compiler to run C program online
#include <stdio.h>
#include<string.h>

int main() {
    // Write C code here
    char str1[100],str2[100];
    printf("enter a string\n");
    fgets(str1,sizeof(str1),stdin);
    strcpy(str2,str1);
    printf("copied string is%s",str2);

    return 0;
}