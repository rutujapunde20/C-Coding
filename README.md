#include<stdio.h>

int main()
{
	int a[10], i,j,n ,k=0, c=0;
	
	printf("Enter size of the array :");
	scanf("%d",&n);
	
	printf("Enter elements in array:");
	
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n; i++)
	{
		if(a[j]!=-1)
		{
			for(j=i+1;j<n; j++)
			{
				if(a[i]==a[j])
				{
					c++;
					a[j]=-1;
				}
			}
		}
		if(a[i]!=-1)
		{
			a[k++]=a[i];
		}
	}
	
	printf("Elements are after deleting duplicates in array:\n");
	
	for(i=0; i<n-c;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
	
}
