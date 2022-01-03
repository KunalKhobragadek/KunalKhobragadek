#include<stdio.h> 
int main()
 {
int num,a,b,c,reverse;
 printf("\nEnter any 3 digit number : ");
scanf("%d",&num);
a=num%10;
num=num/10;
b=num%10;
 num=num/10;
c=num;
reverse=(a*100+b*10+c*1);
printf("\n Reverse number is %d", reverse);
return 0;
}