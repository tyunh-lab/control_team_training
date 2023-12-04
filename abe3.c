#include <stdio.h>

int main()
{
    printf("a,bを入力\n");
    double a, b;
    scanf("%lf", &a);
    scanf("%lf", &b);
    if (a > b)
    {
        printf("ikakou");
    }
    else if (a < b)
    {
        printf("umezawa");
    }
    else
    {
        printf("美術部部長");
    }
    return 0;
}
