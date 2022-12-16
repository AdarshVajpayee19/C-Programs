// c program to return pointer to larger of two numbers.

#include<stdio.h>

int *largest(int *a,int *b)//we can return pointer from the function
{
    if(*a > *b)
    {
        return a;
    }
    return b;
}
void main()
{
    int x,y,*big;

    printf("Enter the values of x and y: ");
    scanf("%d %d",&x,&y);
     
    big=largest(&x,&y);
    printf("Maximum(%d,%d) = %d\n",x,y,*big);
}