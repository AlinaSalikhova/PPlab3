#include <stdio.h>
#define MAX 16

int a[] = { 1, 5, 7, 10, 12, 14, 15, 18, 20, 22, 25, 27, 30, 64, 110, 220};
int max =0;

int main()
{
    for (int i = 0; i < MAX; ++i)
    {
        if (a[i] > max)
            max = a[i];

    }

   printf("Time is %d ", time);
    printf("Max is %d ", max);
    return 0;
}
