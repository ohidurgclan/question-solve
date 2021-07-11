#include <stdio.h>

int main(){
  int n, i = 3, count, c;
  printf("Enter The Number of Prime Numbers: ");
  scanf("%d", &n);
  printf("\n");
  if (n >= 1) {
    printf("First %d prime numbers are:\n\n",n);
    printf("2, ");
  }
  for (count = 2; count <= n;){
    for (c = 2; c <= i - 1; c++){
      if (i%c == 0)
        break;
    }
    if (c == i){
      printf("%d, ", i);
      count++;
    }
    i++;
  }
    printf("\n\n");
  return 0;
}
