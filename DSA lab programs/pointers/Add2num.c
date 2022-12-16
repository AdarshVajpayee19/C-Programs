//C program to add two numbers using pointers.

#include<stdio.h>

void main()
{
    int a,b,sum;
    int *pa, *pb;
    pa = &a;
    pb = &b;

    printf("Enter the two numbers : ");
    scanf("%d %d",&a,&b);

    sum = *pa + *pb;
    printf("sum of %d and %d is %d",*pa,*pb,sum);
}