#include<stdio.h>
int main()
{
	int i, n, sum=0;
	printf("Enter upper limit:");
	scanf("%d",&n);
	
	printf("\n Even number between 0 to 100 are :",n);
	for(i=1; i<=n; i++)
	{
		if(i%2 == 0)
		{
			printf("%d",i);
			
			sum=sum+i;
		}
	}
	printf("\nThe sum of All even number upto %d =%d",n,sum);
	
	return 0;
	
}
