//C program to display array elements by comparing pointers.

#include<stdio.h>

void main()
{
    int a[10],*p,*q,n,i;

    printf("enter the number of elements : ");
    scanf("%d",&n);
    //read array elements
    printf("Enter the array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }

    p = (a+0);// &a[0]
    q = (a+n-1);// &a[n-1]

    while(p<=q)//comparing two pointers.
    {
        printf("%d ",*p);
        p++;
    }
    printf("\n");
}