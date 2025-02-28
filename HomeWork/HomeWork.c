#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gval = 0; 

int main(int argc, char *argv[])
{
    int val, ret = 0; 
    if (argc < 2) {
        printf("Program takes one argument.\n");
        exit(0);
    }
    val = atoi(argv[1]);

    if (val > 1000) {
      ret = val + 1;
        printf("A: %d\n", ret); 
    }
    else if (val > 500) {
        printf("B: %d\n", val);
        printf("B: @@@\n");
    }
    else if (val > 200) {
        int arr[500];
        arr[100] = 32; 
        printf("C: %d\n", arr[100]); 
    }
    else if (val > 100) {
        printf("D: %d\n", val); 
    }
    else if (val > 10) {
        printf("E: FLAG Reached\n");
    }
    else {
      ret = val * 2;
        printf("F: %d\n", ret);
    }

    return 0;
}