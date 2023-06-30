#include "stdio.h"

// Some void void example function
void some_void_void_function(void){
    printf("In 'some_void_void_function'\r\n");
}

// Execute function if not NULLL
void execute_void_void_function(void (*fPtr)(void)){
    printf("execute_void_void_function : ");

    // If NULL, notify and return
    if (fPtr == NULL) {
        printf("Nothing to execute...\r\n");
        return;
    }

    // At this point function is not NULL : execute function
    fPtr();
}

int main(void){
    // Declare a void void function pointer
    void (*function_ptr)(void) = some_void_void_function;

    // Call 'some_void_void_function' by 'function_ptr'
    function_ptr();

    // Try to execute 'some_void_void_function'
    execute_void_void_function(function_ptr);
    
    // Try to execute NULL pointer
    function_ptr = NULL;
    execute_void_void_function(function_ptr);

    // Execute 'some_void_void_function'
    some_void_void_function();

    return 0;
}