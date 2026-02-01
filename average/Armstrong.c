#include <stdio.h>

int main() {
    // Write C code here
    int n,t,d,sum=0;
    printf("enter the number");
    scanf("%d",&n);
    t=n;
    while(t!=0)
    {
        d=t%10;
        sum+=d*d*d;
        t/=10;
    }
     if(sum==n)
    {
    printf("it is an Armstrong number");
     }
     else
     printf("it is not an Armstrong number ");

    return 0;
}