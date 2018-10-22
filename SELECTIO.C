#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],i,j,k,n,temp,min;
  clrscr();
  printf("enter the size of the array: ");
  scanf("%d",&n);
  printf("enter the elements of the array: \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  min=a[0];
  printf("the sorted array is: \n");
  for(i=0;i<n;i++)
  {
    for(j=0;j<i+1;j++)
    {
      if(a[i]<a[j])
      {
	min=a[i];
	a[i]=a[j];
	a[j]=min;
      }
    }
  }
  printf("the sorted array is: ");
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
  getch();
  }