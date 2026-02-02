// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // Write C code here
    int i,n,key,flag=0,pos;
    printf("enter the size of the array");
    scanf("%d",&n);
    int arr[n];
    printf("enter the no of elements ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("array elements are:");
        for(i=0;i<n;i++)
    {
        printf("%d\t",arr[i]);
    }
    printf("enter the no of element to be searched");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
        flag=1;
        pos=i;
        }
    }
    if(flag==1)
    printf("%d is found at %d",key,pos);
    else
    printf("element not found");
    

    return 0;
}