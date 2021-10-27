#include <stdio.h>

int main()
{
    int a;
    double b;
    float c;

    scanf("%d %lf %f", &a, &b, &c);
    printf("a %d  b %.2lf  c %.2f", a, b, c);

    return 0;
}