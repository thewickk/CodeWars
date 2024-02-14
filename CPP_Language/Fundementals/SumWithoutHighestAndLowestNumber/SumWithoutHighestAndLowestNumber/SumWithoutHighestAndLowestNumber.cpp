/*
Task
Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).

The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.

Mind the input validation.

Example
{ 6, 2, 1, 8, 10 } => 16
{ 1, 1, 11, 2, 3 } => 6


Input validation
If an empty value ( null, None, Nothing etc. ) is given instead of an array, or the given array is an empty list or a list with only 1 element, return 0.
*/


#include <iostream>
#include <algorithm>
#include<vector>


int sum(std::vector<int> numbers)
{
    if (numbers.size() <= 1) return 0;

    std::sort(numbers.begin(), numbers.end());
    numbers.erase(numbers.begin());
    numbers.pop_back();

    int tally{ 0 };

    for (auto& num : numbers)
    {
        tally += num;
    }

    return tally;
    
}

int main()
{
    std::vector<int> TestVec{ 6, 2, 1, 8, 10 };
    std::sort(TestVec.begin(), TestVec.end());
    TestVec.erase(TestVec.begin());
    TestVec.pop_back();

    for (const auto& vec : TestVec)
    {
        std::cout << "Val: " << vec << ", " << std::endl;
    }


}

