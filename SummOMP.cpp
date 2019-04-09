#include <omp.h>
#include <stdio.h>
#define MAX 100000

int a[MAX];

int main()
{
    int i;
    int j;
    for(i = 0; i < MAX; i++)
        a[i]=i;

    long Summa = 0;
    #pragma omp parallel num_threads(2) reduction(+:Summa)
    {
        #pragma omp for
        for(i = 0; i < MAX; i++)
        {
            Summa += a[i];
            for(j = 0; j < MAX; j++)
            Summa = Summa;
        }
    

    } 
    printf("Summ is %d ", Summa);
    return 0;
}
