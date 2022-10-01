/*
Welcome. In this kata, you are asked to square every digit of a number and concatenate them.

For example, if we run 9119 through the function, 811181 will come out, because 92 is 81 and 12 is 1.

Note: The function accepts an integer and returns an integer
*/

#include "../inc/squareddigits.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long long square_digits (unsigned n)
{
    // array to hold individual numbers from "n"
    unsigned numArray[MAXNUM] = {0};
    
    // string to concatenate indexes from numArray in to using sprintf
    char tallyString[MAXNUM] = {0};
    
    // control variables 
    int index = {0}; 
    unsigned result = {0};
    int j = {0};

    // value we will convert everything into and return from function
    unsigned long long finalTally = 0;

    // Get every digit from "n" and store in array. This will be in reverse order
    while (n > 0)
    {
        // extract numbers starting from end of "n"
        result = n % 10;
        numArray[index] = result;
        n /= 10;
        index++;    
    }

    // Go in reverse order, square the value found at numArray index, convert to string and concatenate
    // it to the tallString char array
    for (j = index - 1; j >= 0; j--)
    {
        unsigned squared = {0};
        char temp[MAXNUM] = {0};
        squared = numArray[j] * numArray[j];
        sprintf(temp, "%i", squared);
        strcat(tallyString, temp);
    }

    sscanf(tallyString, "%llu", &finalTally);

    return finalTally;
}



