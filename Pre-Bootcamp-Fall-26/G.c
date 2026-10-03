#include <stdio.h>

int main () {
    int n;
    scanf("%d", &n);

    int positive = 0;
    int negative = 0;
    int zero = 0;

    for (int i = 0; i < n; i++){
        int x;
        scanf("%d", &x);
        

        if(x > 0) {
            positive ++;
        } else if (x < 0){
            negative ++;
        } else {
            zero ++;
        }
    }

    printf("%.6f\n", (float)positive / n);
    printf("%.6f\n", (float)negative / n);
    printf("%.6f\n", (float)zero / n);
  




    return 0;
}