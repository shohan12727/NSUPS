#include <stdio.h>
#include <math.h>

int main() {
    int T;
    // T means how many different falt do i need to calculate
    scanf("%d", &T);

    while(T--) {
        double L;
        scanf("lf", &L);

        double W = (3.0 / 5.0) * L;
        double R = L / 5.0;

        double red = acos(-1) * R * R;
        double total = L * W;
        double green = total - red;

        print("%.2f %.2\n", red, green);
    }


    return 0;
}