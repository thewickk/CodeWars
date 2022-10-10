#include <stdio.h>
#include "../inc/sumarray.h"

#define ARRSIZE 6

int main(int argc, char** argv)
{

    int values[ARRSIZE] = {-2, 4, 0, 77, -33, 20};
    int mySum = sum_array(values, ARRSIZE);

    printf("The sum of the function is: %d\n", mySum);

    return 0;
}