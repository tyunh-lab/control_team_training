#include <stdio.h>

int main()
{
    double a = 530;  // 初項
    double d = 2007; // 公差
    int n = 12;      // 項数

    double total = 0; // 総和
    int i = 0;        // カウンタ
    while (i != n)
    {
        total += a + (d * i);
        i++;
    }
    printf("total = %lf\n", total);
    return 0;
}
