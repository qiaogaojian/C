#include <stdio.h>

int main()
{
    printf("125 + 0125 = %d\n", 125 + 0125); // 0开头的数字是8进制
    printf("0XAF - 0XFA = %d\n", 0XAF - 0XFA);
    printf("24 * 3 / 5 + 6 = %d\n", 24 * 3 / 5 + 6);
    printf("36 + -(5-23) / 4 = %d\n", 36 + -(5 - 23) / 4);
    printf("35 * 012 + 27 / 4 / 7 * (12 - 4) = %d\n", 35 * 012 + 27 / 4 / 7 * (12 - 4));

    return 0;
}