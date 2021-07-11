#include <stdio.h>
int main()
{
   int i,n,sum=0;
   printf("Inter The Digit of Natural Numbers : ");
   scanf("%d",&n);
   printf("The first %d Natural Numbers are:\n",n);
   for(i=1;i<=n;i++)
   {
     printf("%d, ",i);
     sum+=i;
   }
   printf("\nThe Sum of Natural %d Numbers = %d",n,sum);
return 0;
}

