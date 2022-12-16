//C program to compute sum of elements of array 

#include<stdio.h>

void main()
{
    int a[10],n,i,*p,sum;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",(a+i));
    }

    p = a;//point p to the first element
    sum=0;

    for(i=0;i<n;i++)
    {
        sum = sum + *p++;
    }
    printf("Sum of all the %d numbers is = %d\n",n,sum);
}