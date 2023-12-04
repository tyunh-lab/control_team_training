#include <stdio.h>

int main()
{
    printf("a,bを入力\n");
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("a*b=%lf\n", a * b);
    return 0;
}
