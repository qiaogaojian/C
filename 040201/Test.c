#include <stdio.h>

int main()
{
    for (int i = 0; i < 10; i++)
    {
        if (i == 4)
        {
            continue;
        }
        for (int j = 0; j < 10; j++)
        {

            if (j > 3)
            {
                break;
            }
            printf("i %d j %d   ", i, j);
        }
        printf("\n");
    }

    return 0;
}