/*
Implement the function unique_in_order which takes as argument a sequence and returns a list of items without any elements with the same value next to 
each other and preserving the original order of elements.

For example:

uniqueInOrder("AAAABBBCCDAABBB") == {'A', 'B', 'C', 'D', 'A', 'B'}
uniqueInOrder("ABBCcAD")         == {'A', 'B', 'C', 'c', 'A', 'D'}
uniqueInOrder([1,2,2,3,3])       == {1,2,3}
*/

#include <string>
#include <vector>

template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
    //uniqueInOrder("AAAABBBCCDAABBB")

    std::vector<T> vec{};
    for (const auto t : vec)
    {
        auto cur = t;
        if (std::find(vec.begin(), vec.end(), cur) == vec.end())
        {
            vec.push_back(t);
        }
    }
    return vec;
}
std::vector<char> uniqueInOrder(const std::string& iterable) {
    std::vector<char> holder{};
    
    for (const auto let : iterable)
    {
        char cur = let;
        if (std::find(holder.begin(), holder.end(), cur) == holder.end())
        {
            holder.push_back(let);
        }
    }
    return holder;
}


#include <vector>
#include <string>
#include <string>
#include <iostream>
#include <set>

int main()
{
    std::vector<std::string> test1{ "ABBCcAD" };
    std::vector<int> intTest1{ 1,2,2,3,3 };
    std::vector<int> intHolder{};
    std::vector<char> charVec{};
    
    if (test1.size() > 1)
    {
        for (auto iter = )
    }

    for (const auto let : charVec)
    {
        std::cout << let;
    }
    
    std::cout << "\n";

    for (const auto num : intTest1)
    {
        int curr = num;
        if (std::find(intHolder.begin(), intHolder.end(), curr) == intHolder.end())
        {
            intHolder.push_back(num);
        }
    }

    for (const auto num : intHolder)
    {
        std::cout << num;
    }

    

}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
