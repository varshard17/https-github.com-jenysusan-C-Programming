#include<stdio.h>
main()
{
	int a[20],i,j,temp;
	printf("Enter size:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
		{
			if(a[j]>a[j+1])
			{
			 temp=a[j];
			 a[j]=a[j+1];
			 a[j+1]=temp;
			}
		}
	}
	printf("The sorted array is:");
	for(j=0;j<n;j++)
		printf("%d",a[j]);
	
}
