#include <stdio.h>

int broken_rec_func(int _param){
    return broken_rec_func(_param + 1);
}

int rec_func(int _param){
    if (_param >= 20) return _param;
    else rec_func(_param + 1);
}

int main(void){
    int a = rec_func(21);
    //int b = broken_rec_func(1); // Will cause Stack Overflow (broken_rec_func called 86264 times)
    return 0;
}

/*
Output
Exception has occurred: W32/0xC00000FD
Unhandled exception at 0x003C6EEA in recursion.exe: 0xC00000FD: Stack overflow (parameters: 0x00000001, 0x01002FFC).
*/

/*
Call stack :
recursion.exe!rec_func(int _param) Line 4 (c:\Users\mathieu le-dimna\OneDrive\2 - Travail\Interventions\C Language\Codes\recursion\recursion.c:4)
[...]
recursion.exe!rec_func(int _param) Line 4 (c:\Users\mathieu le-dimna\OneDrive\2 - Travail\Interventions\C Language\Codes\recursion\recursion.c:4)
The maximum number of stack frames supported by Visual Studio has been exceeded. (Unknown Source:0)
*/