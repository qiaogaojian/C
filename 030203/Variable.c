#include <stdio.h>

int main()
{
    int x = 2;
    int y = (x = 3) + x;  // C 语言标准并没有规定加法运算对两个运算对象的求值顺序，它只说在程序中不应该写出这样的表达式，这种表达式可能的结果没有定义。
    printf("x %d y %d", x, y);

    return 0;
}