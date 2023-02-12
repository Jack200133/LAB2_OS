#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    double time;
    start = clock();

    for (int i = 0; i < 1000000; i++)
    {
        printf("id: %d", i);
    }
    for (int j = 0; j < 1000000; j++)
    {

        printf("id: %d", j);
    }
    for (int k = 0; k < 1000000; k++)
    {
        printf("id: %d", k);
    }

    end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion: %f\n", time);
    return 0;
}