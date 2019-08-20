
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *m = malloc(5 * sizeof(int));
    for (int i = 0; i < 5; i++)
    {
        *(m + i) = 0;
        printf("%d\n", *(m + i));
    }
}