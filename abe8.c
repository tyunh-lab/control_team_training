#include <stdio.h>
#include <math.h>

int main()
{
    double r = 2.0; // 半径
    double s = 0.0; // 面積

    double i = -1 * r;   // xの値
    double split = 1000; // 分割数
    while (i < r)
    {
        // y=√(1-x^2)を求める
        s += sqrt(pow(r, 2) - pow(i, 2));
        i = i + (1 / split);
    }
    s = s / split;
    printf("s = %f\n", s * 2);
    return 0;
}