#include <stdio.h>

int main () {

    int sum;
    int a,b,c;
    scanf("%d",&sum);
    scanf("%d %d %d",&a,&b,&c);

    int missing = sum - (a+b+c);

    printf("%d",missing);







    return 0;
}