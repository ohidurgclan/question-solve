#include<stdio.h>
#include<limits.h>
int main(){
  int n, array[20];
  printf("Enter The Array Size: ");
  scanf("%d",&n);
  printf("\n");
  printf("Enter the elements: ");
  for(int i=0; i<n; i++){
    scanf("%d",&array[i]);
  }
  int max = INT_MIN;
  int secondmax = INT_MIN;
  for(int i=0; i<n; i++){
    if(array[i]>max){
      secondmax = max;
      max = array[i];
    }
    else if(array[i]<max && array[i]>secondmax){
      secondmax = array[i];
    }
  }
  printf("Second largest element is %d\n\n",secondmax);
  return 0;
}
