#include "libary.h"
#include <stdio.h>

int main(int argc, char *argv[])
{
    if(argc > 1)
    {
        for(int i = 1; i < argc; i++)
        {
            printf("%s ", argv[i]);
        }
        printf("\n");
    } else {
        printf("no input\n");
    }

    return 0;
}