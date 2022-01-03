#include <stdio.h>
int main()
{
    int num, sum, digits, firstDigit, lastDigit;
    sum = 0;
    printf("Enter any 5digit number to find sum of first and last digit: ");
    scanf("%d", &num);
    lastDigit  = num % 10;   
	firstDigit =num/10000; 
    sum = firstDigit + lastDigit; 
    printf("Sum of first and last digit = %d", sum);
    return 0;
}