#include <stdio.h>
#include <math.h>

int main()
{
    int a = 8177;
    int b = 3315;
    int q = a / b;
    int r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        q = a / b;
        r = a % b;
    }
    printf("a = %d, b = %d, q = %d, r = %d\n", a, b, q, r);
    printf("よってあまりは%d", b);
    return 0;
}
