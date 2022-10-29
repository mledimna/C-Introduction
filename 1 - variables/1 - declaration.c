#include <stdio.h>

// Global variable
int global_variable = 1;

void main(void)
{
    // Local variable
    int local_variable = 2;

    printf(
        "Local variable is %d, global variable is %d\r\n"
        "- Local variable only exists in its own context (here in main function)\r\n"
        "- Global variable exists in all contexts\r\n"
        , local_variable, global_variable);
}
