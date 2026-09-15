#include <stdio.h>

int main () {
    int n;
     long long x, sum = 0;
     scanf("%d",&n);

     for (int i = 0; i < n; i++){
       scanf("%lld",&x);
       sum += x;
     }

     printf("%lld",sum);

     return 0;

}