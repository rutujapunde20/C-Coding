# C-Coding
c programming

/*Write a c program to reverse natural number*/

#include<stdio.h>
int main()
{
	int n;
	
	printf("Enter a value of n:");
	scanf("%d",&n);
	
	while(n>=1)
	{
		printf("%d\n",n);
		n--;
	}
	return 0;
}
	
