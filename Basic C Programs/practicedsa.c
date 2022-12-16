//pattern matching algorithm
// #include<stdio.h>
// #include<string.h>
// void readstr(char *str,char *pat,char *rep){
//     printf("ENTER THE STRING : ");
//     gets(str);
//     printf("ENTER THE PATTERN STRING : ");
//     gets(pat);
//     printf("ENTER THE REPLACEMENT STRING : ");
//     gets(rep);
// }
// void patmatrep(char *str,char *pat,char *rep,char *ans){
//     int i,j,m,c,k,flag=0;
//     i=j=k=c=m=0;
//     while(str[c]!='\0'){
//             if(str[m]==pat[i])
//             {
//                 i++;
//                 m++;
//                 if(pat[i]=='\0')
//                 {
//                     for(k=0; rep[k]!='\0';k++,j++)
//                         {
//                             ans[j]=rep[k];
//                         }
//                         i=0;c=m;flag=1;
//                     }
//             }
//             else {
//                 ans[j]=str[c];
//                 j++;c++;i=0;m=c;
//             }
//         }
//         ans[j]='\0';
//         if(flag==0)
//              printf("PATTERN NOT FOUND");
// }
// void main(){
//     char str[20],pat[20],rep[20],ans[40];
//     readstr(str,pat,rep);
//     patmatrep(str,pat,rep,ans);
//     printf("\nResultant string is: %s",ans);
// }

// swapping two numbers without using third variable
// #include <stdio.h>
// void main(){
//     int a,b;
//     printf("ENTER THE TWO ELEMENTS Y1OU WANT TO SWAP : ");
//     scanf("%d %d",&a,&b);
//     a=a+b;
//     b=a-b;
//     a=a-b;
//     printf("AFTER SWAPPING ELEMENTS ARE : %d %d\n",a,b);
// }

//                       //average of five numbers is 42 and given four
//                         //  numbers 63 51 33 29 and find fifth number
// #include <stdio.h>
// void main(){
//     int a[20],i,n;
//     float findnum;
//     float sum=0;
//     int avg=0;
//     printf("ENTER THE NUMBER OF ELEMENTS U KnOW  : ");//63+51+33+29+x=avg
//     scanf("%d",&n);                                   //     5
//     printf("ENTER THE GIVEN NUMBERS : ");              //
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(i=0;i<n;i++){
// //    not required      // avg=avg+((a[i])/(n+1));
//         sum = sum + a[i];
// //    not required      // avg = avg + (a[i]/(n+1));
//     }
// //  not required   // printf("TO FIND FIFTH ELEMENT : ");
// //    not required  // a[i]=findnum/n;                               //avg *n-sum
//     printf("sum = %f\n",sum);

// //  not required    // printf("avg = %d\n",avg);
// //   not required   // mean = 42;
//     int mean;
//     printf("mean = ");
//     scanf("%d",&mean);
// //   not required   // // findnum=(ag*(n+1)-);
//     findnum = ((n+1)*(mean)- sum);
//     printf("THE OTHER NUMBER IS : %f",findnum);
//  not required    // printf("avg= %d", avg);
// }

//                                                  //ARRAY OPERATIONS
// #include<stdio.h>
// #include <stdlib.h>
// void create(int a[],int n)
// {
//     int i;
//     printf("Enter the array elements : ");
//     for (i=0;i<n;i++)
//     {
//          scanf("%d",&a[i]);
//     }
// }
// void display(int a[],int n)
// {
//     int i;
//     printf("Array elements are : ");
//     for(i=0;i<n;i++){
//         printf("%d\t",a[i]);
//     }
// }
// void insert(int a[],int *n)
// {
//     int i,pos,item;
//     printf("Enter at what position u want to insert an element : ");
//     scanf("%d",&pos);
//     if(pos<1||pos>(*n)+1)
//     {
//         printf("INVALID POSITION\n");
//         return;
//     }
//     printf("Enter the item : ");
//     scanf("%d",&item);
//     pos--;
//     for(i=(*n)-1;i>=pos;i--)
//     {
//          a[i+1]=a[i];
//     }
//     a[pos]=item;
//     (*n)=(*n)+1;
// }
// void delete(int a[],int *n)
// {
//     int i,pos;
//     if((*n)==0)
//     {
//         printf("Array is empty");
//         return;
//     }
//     printf("Enter at what position u want to delete an element : ");
//     scanf("%d",&pos);
//     if(pos<1||pos>(*n)+1)
//     {
//         printf("INVALID POSITION\n");
//         return;
//     }
//     pos--;
//     for(i=pos;i<=(*n)-1;i++)
//     {
//         a[i]=a[i+1];
//     }
//     (*n)=(*n)-1;
// }
// void main(){
//     int choice=1;
//     int a[50],n;
//     while(1)
//     {
//         printf("\nENTER THE OPERATION :\n1.CREATE\n2.DISPLAY\n3.INSERT\n4.DELETE\n5.EXIT\n");
//         scanf("%d",&choice);
//         switch(choice)
//         {
//             case 1:printf("Enter the size of the array : ");
//                    scanf("%d",&n);
//                    if(n<1||n>50){
//                        printf("plz Enter the valid size ");
//                        break;
//                    }
//                    create(a,n);
//                     break;
//             case 2:
//                    display(a,n);
//                     break;
//             case 3:insert(a,&n);
//                     break;
//             case 4:delete(a,&n);
//                     break;
//             case 5:exit(0);
//         }
//     }
// }
// //GREATEST OF FOUR NUMBERS
// #include <stdio.h>

// int max_of_four(int a,int b,int c,int d){
//     if(a > b && a  > c && a > d)
//         return a;
//     else if(b >a && b>c && b>d)
//         return b;
//     else if(c >a && c>b && c>d)
//         return c;
//     else
//         return d;
// }
// int main() {
//     int a, b, c, d;
//     printf("Enter the four numbers: ");
//     scanf("%d %d %d %d", &a, &b, &c, &d);
//     int ans = max_of_four(a, b, c, d);
//     printf("%d", ans);

//     return 0;
// }

//ADDITION OF TWO INT AND FLOAT NUMBERS
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>

// int main()
// {
// 	int a,b;
//     float x,y;
//     scanf("%d %d", &a, &b);
//     printf("%d %d\n", a+b, a-b);
//     scanf("%f %f", &x, &y);
//     printf("%.1f %.1f", x+y, x-y);

//     return 0;
// }
//USE OF SCANSET CHARACTER {"%[^\n]%*c"} used to read strings with spaces untill null character is encounter
// #include <stdio.h>
// #include <string.h>
// #include <math.h>
// #include <stdlib.h>
// #define MAX_LEN 20
// int main()
// {
//     char ch,s[MAX_LEN],sen[MAX_LEN];
//     scanf("%c", &ch);
//     scanf("%s", s);
//     scanf("\n");
//     scanf("\n%[^\n]%*c", sen);
//     printf("%c\n", ch);
//     printf("%s\n",s);
//     printf("%s",sen);
//     return 0;
// }
//Floyd's triangle
// #include<stdio.h>
// void main(){
//        int i,j,rows,val=1;
//        printf("ENTER THE NUMBER OF ROWS : ");//5
//        scanf("%d",&rows);

//        for(i=1;i<=rows;i++){                    //i=1;1<5;j=1;val=1;
//            for(j=1;j<=i;j++){                   //val=2;j=2;2<1;(false)then i increment i=2;j=2;1<=2;val= 2 increment
//                printf("%d ", val);               //val =3 ; 2<=2;true; val = 2 3 printed
//                val++;
//            }
//              printf("\n");
//        }
// }
//RIGHTANGLED TRIANGLE STAR PATTERN
// #include<stdio.h>
// void main(){
//        int i,j,rows,val=1;
//        printf("ENTER THE NUMBER OF ROWS : ");//5
//        scanf("%d",&rows);

//        for(i=1;i<=rows;i++){
//            for(j=1;j<=i;j++){
//                printf("*");
//            }
//            printf("\n");
//        }
// }
                                       //pattern * of given rows and columns
// #include<stdio.h>
// void main(){
//        int i,j,rows,columns;
//        printf("ENTER THE NUMBER OF ROWS AND COLUMNS : ");//5
//        scanf("%d %d",&rows,&columns);

//        for(i=1;i<=rows;i++){
//            for(j=1;j<=columns;j++){
//                printf(" * ");
//            }
//            printf("\n");
//        }
// }

                                 //PROGRAM TO ADD NUMBERS WITHOUT '+' OPERATOR
// #include<stdio.h>
// void main(){
//     int x,y;
//     printf("ENTER THE TWO NUMBERS : ");
//     scanf("%d %d",&x,&y);
//     while (y!=0){
//         x++;
//         y--;
//     }
//     printf("THE SUM OF THE TWO NUMBERS WITHOUT USING + OPERATOR IS : %d", x);
// }
                                       
                                 //PROGRAM TO ADD Three NUMBERS WITHOUT '+' OPERATOR
                                 /*
#include <stdio.h>
void main()
{
    int x, y, z;
    printf("ENTER THE THREE NUMBERS : ");
    scanf("%d %d %d", &x, &y, &z);
    while (z!=0)
    {
        x++;
        z--;
    }
    while(y!=0)
    {
       x++;
        y--;
    }
    printf("THE SUM OF THE Three NUMBERS WITHOUT USING + OPERATOR IS : %d", x);
}  */
//THE SUM OF THE FOUR NUMBERS WITHOUT USING + OPERATOR
// #include <stdio.h>
// void main()
// {
//     int x, y, z, a;
//     printf("ENTER THE FOUR NUMBERS : ");
//     scanf("%d %d %d %d", &x, &y, &z, &a);
//      while (a!=0)
//     {
//         x++;
//         a--;
//     }
//     while (z!=0)
//     {
//         x++;
//         z--;
//     }
//     while(y!=0)
//     {
//        x++;
//         y--;
//     }
//     printf("THE SUM OF THE four NUMBERS WITHOUT USING + OPERATOR IS : %d", x);
// }
                        //Program on the LEAP YEAR
// to check the given year is leap year or not?
// -->if a year is divisible by 400.then it is a leap year ex :2000
// -->if a year is not divisible by 400.but it is divisible by 100 then it is not a leap year ex : 1900
// -->if a year is not divisible by 400.and also it is not divisible by 100 but it is divisible by 4 then it is leap year ex:2012
// #include <stdio.h>

// void main(){
//     int year;
//     printf("ENTER THE YEAR : ");
//     scanf("%d",&year);

//     if(year % 400==0){
//         printf("IT IS A LEAP YEAR\n ");
//     }
//     else if(year%100==0){
//         printf("ITS IS NOT A LEAP YEAR");
//     }
//     else if(year%4==0){
//         printf("IT IS A LEAP YEAR\n ");
//     }
//     else{
//         printf("ITS IS NOT A LEAP YEAR");
//     }
// }
                                    //BINARY TO DECIMAL
// #include <stdio.h>
// void main(){
//     int binary,decimal=0,rem,base=1,num; 
//     printf("ENTER THE BINARY NUMBER : ");
//     scanf("%d",&binary);

//     num=binary;
//     while(binary!=0){
//         rem=binary%10;
//         decimal=decimal+base*rem;
//         binary=binary/10;
//         base =base *2;
//     }
//     printf("EQUIVALENT DECIMAL NUMBER OF THE GIVEN BINARY NUMBER IS %d : %d",num,decimal);
// }
