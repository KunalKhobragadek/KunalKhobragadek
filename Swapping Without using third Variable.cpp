#include<stdio.h>
int main()
{
    int a,b;
    printf("\n Enter the 2 number ");
    scanf("%d%d",&a,&b);
    printf("\n Before the interchange a=%d and b=%d  ",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\n After the interchange a=%d and b=%d",a,b);
    return 0;
}