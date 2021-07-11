#include <stdio.h>
int main(){
  int n, colamn, row, t = 1;
  printf("Inter Number of Colamn: ");
  scanf("%d", &n);

  for (row = 1; row <= n; row++) {
    for (colamn = 1; colamn <= n - row; colamn++)
      printf(" ");
    t = row;
    for (colamn = 1; colamn <= row; colamn++) {
      printf("%d", t);
      t++;
    }
    t = t - 2;
    for (colamn = 1 ; colamn < row; colamn++) {
      printf("%d", t);
      t--;
    }
    printf("\n");
  }
  return 0;
}
