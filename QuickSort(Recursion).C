/* Quicksort with Recursion 
   Jeny Susan Rajan S3 D
   Roll no: 28 */

#include<stdio.h>
void Quicksort(int[],int,int);
int main()
{
  int i,count,no[25];
  printf("Enter size:");
  scanf("%d",&count);
  printf("Enter %d elements:",count);
  for(i=0;i<count;i++)
  	scanf("%d",&no[i]);
  Quicksort(no,0,count-1);
  printf("The sorted elements are:");
  for(i=0;i<count;i++)
  	printf("%d",no[i]);
  return 0;
}

void Quicksort(int no[25],int first,int last)
{
  int i,j,pivot,temp;
  if(first<last)
  { 
    pivot=first;
    i=first;
    j=last;
    while(i<j)
    {
	while((no[i]<=no[pivot]) &&(i<last))
		i++;
	while (no[j]>no[pivot])
		j--;
	if(i<j)
	{
		temp=no[i];
		no[i]=no[j];
		no[j]=temp;
	}
    }
    temp=no[pivot];
    no[pivot]=no[j];
    no[j]=temp;
    Quicksort(no,first,j-1);
    Quicksort(no,j+1,last);
  }
}
  	
