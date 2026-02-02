// Online C compiler to run C program online
#include <stdio.h>

int main() {
    int i,n,evncount=0,oddcount=0;
    // Write C code here
    printf("enter the size of the array");
    scanf("%d",&n);
    int a[n];
    printf("enter the array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The array is:\n");
        for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    for(i=0;i<n;i++)
    {
    if(a[i]%2==0)
    {
        evncount+=1;
    }
    else
    {
        oddcount+=1;
    }
        
    }
    printf("evencount=%d\t",evncount);
    printf("oddcount=%d",oddcount);
    return 0;
}