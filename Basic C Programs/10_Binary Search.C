/* Binary Search*/


#include<stdio.h>
main()
{
	int a[50],i,n,x,f=0,beg,last,mid;
	printf("Enter size of array:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	printf("Enter element to be searched:");
	scanf("%d",&x);
	beg=0;
	last=n-1;
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(x==a[mid])
		{
		 f=1;
		 break;
		}
		else if(x>a[mid])
			beg=mid+1;
		else
			last=mid-1;
	}
	if(f==1)
		printf("\n Element found at position: %d",mid+1);
	else 
		printf("\n Element not found");
}

OUTPUT:
Enter size of array: 5
Enter elements:
7 3 2 9 6
Enter element to be searched: 6
Element found at position: 3
