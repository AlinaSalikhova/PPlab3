#include <stdio.h>
#define MAX 100000

int a[MAX];

int main()
{
    int j;
    int i;
    for(j = 0; j < MAX; j++)
        a[j]=j;

    long Summa = 0;
        for(i = 0; i < MAX; i++)
        {
            Summa = Summa + a[i];
           for(j = 0; j < MAX; j++)
            Summa = Summa;
        }
    printf("Summ is %d ", Summa);
    return 0;
}
