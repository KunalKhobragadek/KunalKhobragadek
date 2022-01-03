#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("\n Enter the 2 number ");
    scanf("%d%d",&a,&b);
    printf("\n Before the interchange a=%d and b=%d  ",a,b);
    temp =a;
    a=b;
    b=temp;
    printf("\n After the interchange a=%d and b=%d",a,b);
    return 0;
}