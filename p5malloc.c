#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *data = malloc(100 * sizeof(int));
    for(int i=1;i<=100;i++){
        *(data+i)=1;
    }
    *(data + 100) = 0;
    printf("%d\n", *(data + 100));
}