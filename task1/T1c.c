
#include <stdio.h>
#include <string.h>
#include <stdlib.h>


int main(int argc, char** argv){
    int iarray[3];
    char carray[3];
    printf("- &iarray: %p -- stack\n",&iarray);
    printf("- &iarray+1: %p\n",&iarray+1);
    printf("- &carray: %p\n",&carray);
    printf("- &carray+1: %p\n",&carray+1);
    return 0;
}

