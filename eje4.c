#include <stdio.h>
#include <unistd.h>

int main()
{
    pid_t t = fork();

    if (t == 0)
    {
        for (int i = 0; i < 40000000; i++)
        {
            printf("i = %d", i);
        }
    }

    else
    {
        while (1)
        {
            /* *no hace nada* */
        }
    }
    return 0;
}