#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *data = malloc(100 * sizeof(int));
     for(int i=1;i<=100;i++){
        *(data+i)=1;
    }
    int *funnyValue = (data + 50);
    free(funnyValue); 
    printf("%d", *(data + 50));
    free(data);
}