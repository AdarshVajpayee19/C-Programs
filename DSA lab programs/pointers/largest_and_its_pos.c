//c program to compute the largest and its position.

#include<stdio.h>

void main()
{
    int a[10],n,i,big,pos;

    printf("Enter the number of elements : ");
    scanf("%d",&n);

    printf("Enter the elements \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",a+i);  //(a+i) or &a[i].
    }
    big = *(a+0);// *(a+0) or a[0].
    pos=0;
    for(i=1;i<n;i++)
    {
        if(*(a+i)>big)
        {
            big= *(a+i);
            pos = i;
        }
    }
    printf("Largest = %d\n",big);
    printf("position = %d\n",pos+1);
}