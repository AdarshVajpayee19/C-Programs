//C program to search any item in array using binary search.

#include<stdio.h>

void search(int item,int *a,int n,int *pos)
{
    int low,high,mid;
    //initialization
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(item == *(a+mid))
        {
            *pos=mid;
            return;
        }
        if(item < *(a+mid))
        {
            // search left
            high = mid-1;
        }
        else
            low = mid+1;
    }
    *pos = -1;
}

void main()
{
    int i,n,item,a[20],pos;

    printf("Enter the value of n: ");
    scanf("%d",&n);

    printf("Enter %d values\n",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }

    printf("Enter the item to be searched: ");
    scanf("%d",&item);
    search(item,a,n,&pos);

    if(pos == -1)
        printf("Item not found\n");
    else
        printf("Item found at %d position\n",pos);
}