#include <stdio.h>
int main(){
    int i, n, sum = 0;
    printf("Enter Number to Check Perfect Number: ");
    scanf("%d", &n);
    printf("\n");
    for(i = 1; i <= n / 2; i++){
        if(n%i == 0){
            sum += i;
        }
    }
    if(sum == n && n > 0){
        printf("It's a Perfect Number\n\n", n);
    }
    else{
        printf("It's Not a Perfect Number\n\n", n);
    }
    return 0;
}
