/* C Program to find first and last digit of a number*/

#include<stdio.h>
int main()
{
	int n,firstDigit, lastDigit;
	
	printf("Enter any number :");
	scanf("%d",&n);
	
	firstDigit=n;
	while(firstDigit >=10)
	{
		firstDigit = firstDigit /10;
	}
	
	printf("first Digit = %d", firstDigit);
	{
	
	lastDigit = n % 10;
	
	printf("LAst Digit = %d",lastDigit);
    }
	return 0;
}
