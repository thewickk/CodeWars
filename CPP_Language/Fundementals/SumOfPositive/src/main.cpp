#include <iostream>
#include "../inc/positive_sum.h"

int main()
{
    std::vector<int> test1 = {2, -7, 8, -3, 0, 12};

    int firstTest = positive_sum(test1);

    std::cout << "The results of test1: " << firstTest << std::endl;

    return 0;
}