#include<stdio.h>
int main()
{
    float Fahrenheit,Celsius;
    printf("fahrenheit :");
    scanf("%f", &Fahrenheit);
    Celsius= (Fahrenheit-32)*5/9;
    printf("\n Celsius :%f", Celsius);
    return 0;
}