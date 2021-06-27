/*C program to find sum of all odd numbers*/

#include<stdio.h>
int main()
{
	int i, n, sum=0;
	
	printf("Enter upper limit:");
	scanf("%d",&n);
	
	
	for(i=1; i<=n; i+=2)
	{
		
	sum += i;
	}
	
	printf("\nThe sum of odd numbers =%d",sum);
	
	return 0;
	
}
