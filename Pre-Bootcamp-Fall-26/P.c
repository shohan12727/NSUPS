#include <stdio.h>
#include <math.h>

int main() {
    int T;
    scanf("%d", &T);

    while (T--) {
        double L;
        scanf("%lf", &L);

        double W = (3.0 / 5.0) * L;
        double R = L / 5.0;

        double red = acos(-1) * R * R;
        double total = L * W;
        double green = total - red;

        printf("%.2f %.2f\n", red, green);
    }

    return 0;
}

