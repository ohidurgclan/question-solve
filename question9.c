#include <stdio.h>
int main(){
    int i, sum, loop, large, small;
    int array[30] = {22, 24, 37, 41, 52, 26, 39, 28, 38, 20, 23, 47, 45, 46, 40, 27, 31, 33, 21, 25, 29, 31, 34, 36, 39, 40, 42, 35, 36, 44};
    float avg;
    sum =avg= 0;

    for(loop=0;loop<30;loop++){
      sum=sum+array[loop];
    }
   avg=(float)sum/30;
   printf("Average Temperature of This Month: %.2f%c C\n", avg,248);

   large = array[0];

    for(i = 1; i < 30; i++){
        if(large < array[i]){
            large = array[i];
        }
    }
    printf("\nThe Hottest Day Temperature is: %d%c C\n", large,248);

    small = array[0];

    for(i = 1; i < 30; i++){
        if(small>array[i]){
            small = array[i];
        }
    }
    printf("\nThe Coolest Day Temperature is: %d%c C\n\n", small,248);
return 0;
}
