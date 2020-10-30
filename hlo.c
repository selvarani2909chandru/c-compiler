#include<stdio.h>
int main()
{
    int num= 6749,di,n1,n2,safe;
    while(num>0)
    {
    di=num%10;
    printf("%d",di);
    n1=n1+1;
    n2=n2+1;
    num=num/10;
    }
    printf("  nod: %d, sod: %d",n1,n2);
    num=safe;
}