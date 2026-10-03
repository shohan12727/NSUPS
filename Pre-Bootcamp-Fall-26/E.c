#include <stdio.h>

int main()
{
    int a, b, c;
    int x, y, z;

    int alice = 0, bob = 0;

    scanf("%d %d %d", &a,&b,&c);
    scanf("%d %d %d", &x ,&y,&z);

    if (a>x) alice ++;
    else if(a < x ) bob ++;

    if (b > y )alice ++;
    else if (b < y) bob ++;

    if (c > z) alice ++;
    else if (c < z) bob ++;

    printf("%d %d" , alice, bob ); 


    return 0;
}