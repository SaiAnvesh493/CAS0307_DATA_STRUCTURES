#include<stdio.h>
void quicksort(int arr[25],int first,int last)
{
   int i, j, pivot, temp;
   if(first<last)
   {
      pivot=first;
      i=first;
      j=last;
      while(i<j)
	  {
         while(arr[i]<=arr[pivot]&&i<last)
         i++;
         while(arr[j]>arr[pivot])
         j--;
         if(i<j)
		 {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
         }
      }
      temp=arr[pivot];
      arr[pivot]=arr[j];
      arr[j]=temp;
      quicksort(arr,first,j-1);
      quicksort(arr,j+1,last);
   }
}
int main()
{
   int i,n,arr[25];
   printf("Enter the size of array: ");
   scanf("%d",&n);
   printf("Enter %d elements: ",n);
   for(i=0;i<n;i++)
   scanf("%d",& arr[i]);
   quicksort(arr,0,n-1);
   printf("Sorted elements are: ");
   for(i=0;i<n;i++)
   printf(" %d",arr[i]);
   return 0;
}
