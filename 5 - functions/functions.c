#include <stdio.h>

void void_function(void){
    printf("Do something without parameters and don't return anything\r\n");
}

int int_function(void){
    int a = 42;
    return a;
}

void parameter_function(int _param){
    printf("Parameter is %d\r\n", _param);
}

int main(void){
    void_function();
    int a = int_function();
    printf("'int_function' returned %d\r\n", a);
    parameter_function(a);
    return 0;
}

/*
Do something without parameters and don't return anything
'int_function' returned 42
Parameter is 42
*/