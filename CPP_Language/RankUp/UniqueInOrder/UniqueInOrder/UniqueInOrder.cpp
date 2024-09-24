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
#include <algorithm>


// MY SOLUTIONS //
template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
    //uniqueInOrder("AAAABBBCCDAABBB")

    std::vector<T> vec{};

    T prev{};

    for (const auto t : iterable)
    {
        if (t != prev)
        {
            vec.push_back(t);
        }

        prev = t;
    }
    return vec;
}
std::vector<char> uniqueInOrder(const std::string& iterable) {
    std::vector<char> holder{};
    
    char prev{};
    for (const auto let : iterable)
    {
        if (let != prev)
        {
            holder.push_back(let);
        }
        prev = let;
    }
    return holder;
}
// END MY SOLUTIONS //


// Very clever solution: Requires the <algorithm> header
template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
    std::vector<T> res;

    std::unique_copy(iterable.begin(), iterable.end(), std::back_inserter(res));
    return res;
}
std::vector<char> uniqueInOrder(const std::string& iterable) {
    std::vector<char> res;

    std::unique_copy(iterable.begin(), iterable.end(), std::back_inserter(res));
    return res;
}

// Another clever solution, this one doesn't require any additional headers
template <typename T> std::vector<T> uniqueInOrder(const std::vector<T>& iterable) {
    std::vector<T> result;
    for (const auto& c : iterable) if (result.empty() || c != result.back()) result.push_back(c);
    return result;
}

std::vector<char> uniqueInOrder(const std::string& iterable) {
    std::vector<char> result;
    for (auto c : iterable) if (result.empty() || c != result.back()) result.push_back(c);
    return result;
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
    
    
    //charVec = uniqueInOrder("ABBCcAD");

    //for (const auto let : charVec)
    //{
    //    std::cout << let;
    //}
    //
    //std::cout << "\n";

    intHolder = uniqueInOrder(intTest1);

    for (const auto i : intHolder)
    {
        std::cout << i << ", " << std::endl;
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
