#include <stdio.h>
#include <math.h>

int main()
{
    double r = 2.0; // 半径
    double s = 0.0; // 面積

    double i = -1 * r; // xの値
    while (i < r)
    {
        // y=√(1-x^2)を求める
        printf("s = %lf\n", sqrt(pow(r, 2) - pow(i, 2)));
        s += sqrt(pow(r, 2) - pow(i, 2));
        i = i + 0.001;
    }

    printf("s = %f\n", s * 2);
    return 0;
}

