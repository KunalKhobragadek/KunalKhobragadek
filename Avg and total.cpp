#include<stdio.h>
int main()
{
    int s1,s2,s3,s4,s5,total,avg;
     
    printf("\n Enter the 5 subjects marks ");
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    printf("\n the total  of subjects marks :%d",total);
    avg=(total)/5;
    printf("\n the average of subjects marks :%d",avg);
    
}