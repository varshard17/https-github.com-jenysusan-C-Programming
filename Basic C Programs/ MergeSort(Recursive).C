/* Merge Sort with Recursion
   Jeny Susan Rajan S3 D 
   Roll No 28 */

#include<stdio.h>
int a[20];
void merge_sort(int[],int,int);
void merge(int[],int,int,int);
int main()
{
  int n,i;
  printf("enter the size of the array\n");
  scanf("%d",&n);
  printf("enter the elements:");
  for(i=0;i<n;i++)
    scanf("%d",&a[i]);
  merge_sort(a,0,n-1);
  printf("sorted array:");
  for(i=0;i<n;i++)
  {
    printf("%d",a[i]);
  }
  return 0;
}
  void merge_sort(int a[],int low,int high)
  {
    int mid;
    if(low<high)
    {
      mid=(low+high)/2;
      merge_sort(a,low,mid);
      merge_sort(a,mid+1,high);
      merge(a,low,mid,high);
    }

  }
  void merge(int a[10],int l,int m,int h)
  {
    int a1[10];
    int n1,n2,i;

    for(n1=l,n2=m+1,i=l;n1<=m&&n2<=h;i++)
    {
       if(a[n1]<=a[n2])
	  a1[i]=a[n1++];
       else
	  a1[i]=a[n2++];
    }
     while(n1<=m)
	  a1[i++]=a[n1++];
     while(n2<=h)
	  a1[i++]=a[n2++];
     for(i=l;i<=h;i++)
	  a[i]=a1[i];

  }
OUTPUT:
Enter the number of elements : 2
Enter element 1 :5
Enter element 2 :1
Unsorted list is : 5 1 
Size=1 
Elements are : 1 5 Sorted list is :
1 5
