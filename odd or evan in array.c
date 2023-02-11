#include<stdio.h>
int main()
{
    int n,arr[n],i,ec=0,oc=0,pc=0,nc=0;
    printf("\nEnter the number elemnts in array:");
    scanf("%d",&n);
    printf("\nEnter the elemnts in array:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nThe Even NUmbers in the array:");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
        	ec=ec+1;
            printf("%d ",arr[i]);
        }
    }
    printf("\nTotal no even numbers:%d",ec);
    printf("\nThe odd Nubers in the array:");
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==1)
        {
        	oc=oc+1;
            printf("%d ",arr[i]);
        }
    }
    printf("\nTotal odd numbers:%d",oc);
    return 0;
}
