/*
Welcome. In this kata, you are asked to square every digit of a number and concatenate them.

For example, if we run 9119 through the function, 811181 will come out, because 92 is 81 and 12 is 1.

Note: The function accepts an integer and returns an integer
*/

#include <stdio.h>
#include "../inc/squareddigits.h"



int main()
{
    unsigned long long tally = square_digits(3999999999);

    printf("Tally is: %llu\n", tally);

    return 0;
}