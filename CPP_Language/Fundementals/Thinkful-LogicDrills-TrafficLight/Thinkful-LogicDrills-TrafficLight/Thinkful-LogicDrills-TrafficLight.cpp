/*
You're writing code to control your town's traffic lights. You need a function to handle each change from green, to yellow, to red, and then to green again.

Complete the function that takes a string as an argument representing the current state of the light and returns a string representing the state the light should change to.

For example, when the input is green, output should be yellow.
*/

#include <iostream>
#include <string>
#include <map>

std::string update_light(std::string current)
{   
    if (current == "red") return "green";
    if (current == "green") return "yellow";
    if (current == "yellow") return"red";
}

std::string map_update(std::string current)
{
    std::map < std::string, std::string> mp
    {
        {"red", "green"},
        {"green", "yellow"},
        {"yellow", "red"}
    };

    return mp[current];
}

int main()
{
    ;
}

