#include <stdio.h>
int main()
{

    int mul,n1,n2,num;
    printf("\n enter 9 number");
    scanf("%d",&num);
    n1=num/100000000;
    n2=num%10;
    mul=n1*n2;
    printf("\n mulplication of first and last number:%d",mul);
    
}