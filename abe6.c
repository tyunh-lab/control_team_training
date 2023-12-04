#include <stdio.h>
#include <math.h>

int main()
{
    printf("a,bを入力\n");
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    printf("a^b=%lf\n", pow(a, b));
    return 0;
}
