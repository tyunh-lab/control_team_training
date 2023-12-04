#include <stdio.h>
#include <math.h>

int main()
{
    int a = 390;
    int b = 273;
    int q = 1;
    int r = a - (b * q);
    while (r != 0)
    {
        b = a;
        a = r;
        q++;
        r = a - (b * q);
    }
    printf("a = %d, b = %d, q = %d, r = %d\n", a, b, q, r);
    return 0;
}
