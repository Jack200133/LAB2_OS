#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <sys/wait.h>

int main()
{
    clock_t start, end;
    double time;

    pid_t pid1, pid2, pid3;

    start = clock();
    pid1 = fork();

    if (pid1 = 0)
    {
        pid2 = fork();

        if (pid2 = 0)
        {
            pid3 = fork();

            if (pid3 = 0)
            {
                for (int i = 0; i < 1000000; i++)
                {
                    /* * no hace nada * */
                }
            }
            else
            {
                for (int j = 0; j < 1000000; j++)
                {
                    /* * no hace nada * */
                }
                wait(NULL);
            }
        }
        else
        {
            for (int k = 0; k < 1000000; k++)
            {
                /* * no hace nada * */
            }
            wait(NULL);
        }
    }
    else
    {
        wait(NULL);
        end = clock();
        time = (double)(end - start) / CLOCKS_PER_SEC;
        printf("Tiempo de ejecucion: %f\n", time);
    }
}