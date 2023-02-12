#include <stdio.h>
#include <time.h>

int main()
{
    clock_t start, end;
    double time;
    start = clock();

    for (int i = 0; i < 1000000; i++)
    {
        /* * no hace nada * */
    }
    for (int j = 0; j < 1000000; j++)
    {
        /* * no hace nada * */
    }
    for (int k = 0; k < 1000000; k++)
    {
        /* * no hace nada * */
    }

    end = clock();
    time = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Tiempo de ejecucion: %f\n", time);
    return 0;
}