#include<stdio.h>
#include<conio.h>
void main()
{
  int a[20],i,k,f=0,n;
  clrscr();
  printf("Enter size of array:");
  scanf("%d",&n);
  printf("Enter the elements of the array: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  printf("Enter the element to search for:");
  scanf("%d",&k);
  for(i=0;i<n;i++)
  {
	if(a[i]==k)
	{
	 f=1;
	 break;
	}
  }
  if(f==1)
	printf("Element found at the position: %d",i+1);
  else
	printf("Element not found");
  getch();
}