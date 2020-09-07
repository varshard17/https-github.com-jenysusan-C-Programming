/* Selection Sort */


#include<stdio.h>
#include<conio.h>
void main()
{
  int a[5],i,j,k,n,temp,min;
  clrscr();
  printf("Enter the size of the array: ");
  scanf("%d",&n);
  printf("Enter the elements of the array: \n");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  min=a[0];
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
  printf("The sorted array is: ");
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
  getch();
  }

OUTPUT:
Enter the size of the array: 2
Enter the elements of the array: 
2
3
The sorted array is: 23
