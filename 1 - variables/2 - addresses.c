#include <stdio.h>

// Global variable
int global_variable = 1;

void main(void)
{
    // Local variable
    int local_variable = 2;

    printf(
        "global_variable address : %p, size : %lu\r\n"
        "local_variable address : %p, size : %lu\r\n"
        "main function address : %p, size : %lu\r\n"
        , &global_variable, sizeof(global_variable)
        , &local_variable, sizeof(local_variable)
        , main, sizeof(main));
}
