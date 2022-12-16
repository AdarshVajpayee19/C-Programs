//c program to show the concept of pass by reference.

#include<stdio.h>

void Exchange(int *x,int *y)//formal parameters
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void main()
{
    int a,b;
    printf("Enter the two numbers u want to swap: ");
    scanf("%d %d",&a,&b);

    Exchange(&a,&b);//Actual  parameters
    printf("after swapping the numbers : a = %d and b = %d", a,b);
}