/*
You probably know the "like" system from Facebook and other pages.People can "like" blog posts, pictures or other items.We want to create the text that should be displayed next to such an item.

Implement the function which takes an array containing the names of people that like an item.It must return the display text as shown in the examples :

[] -- > "no one likes this"
["Peter"]                         -- > "Peter likes this"
["Jacob", "Alex"]                 -- > "Jacob and Alex like this"
["Max", "John", "Mark"]           -- > "Max, John and Mark like this"
["Alex", "Jacob", "Mark", "Max"]  -- > "Alex, Jacob and 2 others like this"

Note: For 4 or more names, the number in "and 2 others" simply increases.
*/

#include <iostream>
#include <string>
#include <vector>

std::string likes(const std::vector<std::string>& names)
{
    std::string return_string{};

    switch (names.size()) 
    {
    case 0:
        return_string = "no one likes this";
        break;
    case 1:
        return_string = names[0] + " likes this";
        break;
    case 2:
        return_string = names[0] + " and " + names[1] + " likes this";
        break;
    case 3:
        return_string = names[0] + ", " + names[1] + " and " + names[2] + " likes this";
        break;
    default:
        return_string = names[0] + ", " + names[1] + " and " + std::to_string(names.size() - 2) + " others like this";
        break;
    }

    return return_string; // Do your magic!
}

int main()
{
    const std::vector<std::string> no_name{};
    const std::vector<std::string> one_name{ "Jacob" };
    const std::vector<std::string> two_names{ "Jacob", "Collin" };
    const std::vector<std::string> three_names{ "Jacob", "Collin", "Marcus" };
    const std::vector<std::string> four_names{ "Jacob", "Collin", "Marcus", "Zack" };
    
    std::cout << likes(no_name) << std::endl;
    std::cout << likes(one_name) << std::endl;
    std::cout << likes(two_names) << std::endl;
    std::cout << likes(three_names) << std::endl;
    std::cout << likes(four_names) << std::endl;

    return 0;
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
