#include <stdio.h>

int main()
{
    printf("電圧を入力\n");
    double a;
    scanf("%lf", &a);
    if (a > 16)
    {
        printf('燃える');
    }
    else
    {
        printf('燃えない');
    }
    return 0;
}
