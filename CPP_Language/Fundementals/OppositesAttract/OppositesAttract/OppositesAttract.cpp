/*
Timmy & Sarah think they are in love, but around where they live, they will only know once they pick a flower each. 
If one of the flowers has an even number of petals and the other has an odd number of petals it means they are in love.

Write a function that will take the number of petals of each flower and return true if they are in love and false if they aren't.
*/

bool lovefunc(int f1, int f2) {
    if ((f1 % 2 == 0 && f2 % 2 != 0) || (f1 % 2 != 0 && f2 % 2 == 0)) return true;
    return false;
}

bool way_better(int f1, int f2)
{
    return (f1 + f2) % 2;
}

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

