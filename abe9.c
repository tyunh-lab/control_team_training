#include <stdio.h>
#include <string.h>

int main()
{
    char str1[400] = "";
    char str2[] = " ";
    char str3[] = "*";
    char str4[] = "\n";

    for (int i = 0; i < 324; i++)
    {
        if (i % 2 == 0)
        {
            strcat(str1, str2);
        }
        else
        {
            strcat(str1, str3);
        }
        if (i % 19 == 0)
        {
            strcat(str1, str4);
        }
    }

    printf("%s\n", str1);
    return 0;
}
