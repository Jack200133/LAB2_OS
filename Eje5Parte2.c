#include <stdio.h>
#include <unistd.h>

int main()
{
    int t = fork();

    if (t == 0)
    {
        execl("./5parte1", "5parte1", "10", "a", (char *)NULL);
    }

    else
    {
        usleep(1400);
        execl("./5parte1", "5parte1", "10", "b", (char *)NULL);
    }
    return 0;
}