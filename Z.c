#include <stdio.h>

int main () {

    int N;
    scanf("%d", &N);

    long long a= 1, b=1, fib;

    if(N == 1 || N ==2) {
        printf("1 \n");
    } else {
        for (int i = 3; i <= N; i++) {
            fib = a + b;
            a = b ;
            b = fib;
        }
        printf("%lld \n", b);
    }




    return 0;
}