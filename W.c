#include <stdio.h>

int main () {
    int n;
    scanf("%d",&n);

    int ans = 0;
    for(int i = 1; i <=n; i ++){
        ans ^= i;
    }

    for (int i = 0; i< n-1; i++){
        int x;
        scanf("%d", &x);
        ans ^= x;
    }

    printf("%d\n", ans);




    return 0;

}