//                                                                      //Left Rotation 
#include<stdio.h>

int x;

void Rotate_arr_by_1(int arr[],int n);

void Rotate(int arr[],int x,int n){
    int i;
    for(i=0;i<x;i++){
        Rotate_arr_by_1(arr,n);
    }
}

void Rotate_arr_by_1(int arr[],int n){
    int temp=arr[0],i;
    for(i=0;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
}

void print_array(int arr[],int n){
    int i;
    printf("After rotating Array after %d times : ", x);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[10],n,i;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the Number of times you want to rotate an array: ");
    scanf("%d",&x);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    Rotate(arr ,x,n);
    print_array(arr ,n);
    return 0;   
}
/*
OUTPUT : 
Enter the size of the array : 7
Enter the Number of times you want to rotate an array: 3
Enter the array elements: 10 20 30 40 50 60 70
After rotating Array after 3 times : 40 50 60 70 10 20 30 
*/
                                                                     //Right Rotation 
#include<stdio.h>

int x;

void Rotate_arr_by_1(int arr[],int n);

void Rotate(int arr[],int x,int n){
    int i;
    for(i=x;i>0;i--){
        Rotate_arr_by_1(arr,n);
    }
}

void Rotate_arr_by_1(int arr[],int n){
    int temp=arr[n-1],i;
    for(i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[i]=temp;
}

void print_array(int arr[],int n){
    int i;
    printf("After rotating Array after %d times : ", x);
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
}

int main(){
    int arr[10],n,i;
    printf("Enter the size of the array : ");
    scanf("%d",&n);
    printf("Enter the Number of times you want to rotate an array: ");
    scanf("%d",&x);
    printf("Enter the array elements: ");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    Rotate(arr ,x,n);
    print_array(arr ,n);
    return 0;   
}
/*
OUTPUT :
Enter the size of the array : 7
Enter the Number of times you want to rotate an array: 3
Enter the array elements: 10 20 30 40 50 60 70
After rotating Array after 3 times : 50 60 70 10 20 30 40 
*/

                                                         //Simple solution
#include <stdio.h>

int main() {
  int arr[10],n,i,d,temp,j;
  printf("Enter the size of the array\n");
  scanf("%d",&n);
  for(i=0;i<n;i++){
      printf("Enter the element %d:",i);
      scanf("%d",&arr[i]);
  }
  
  printf("Enter the number at the which the rotation wants to take place\n");
  scanf("%d",&d);
  for(j=0;j<d;j++){
      temp=arr[0];
      for(i=0;i<n-1;i++){
          arr[i]=arr[i+1];
      }
      arr[i]=temp;
  }
  printf("The resulted array is:\n");
  for(i=0;i<n;i++){
      printf("%d\n",arr[i]);
  }
   return 0;
}
/*
OUTPUT:
Enter the size of the array
7
Enter the element 0:10
Enter the element 1:20
Enter the element 2:30
Enter the element 3:40
Enter the element 4:50
Enter the element 5:60
Enter the element 6:70
Enter the number at the which the rotation wants to take place
4
The resulted array is:
50
60
70
10
20
30
40
*/

