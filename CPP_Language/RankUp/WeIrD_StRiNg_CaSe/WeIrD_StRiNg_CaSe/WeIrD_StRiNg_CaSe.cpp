#include <string>
#include <string_view>
#include <iostream>

/*
Write a function that accepts a string, and returns the same string with all even indexed characters in each word upper cased, and all odd indexed characters in each word lower cased. The indexing just explained is zero based, so the zero-ith index is even, therefore that character should be upper cased and you need to start over for each word.

The passed in string will only consist of alphabetical characters and spaces(' '). Spaces will only be present if there are multiple words. Words will be separated by a single space(' ').

Examples:

"String" => "StRiNg"
"Weird string case" => "WeIrD StRiNg CaSe"

*/

std::string to_weird_case(std::string_view str)
{
	std::string temp(str);
	int space_counter = 0;

	for (int i = 0; i < temp.size(); i++)
	{
		if (space_counter % 2 == 0)
		{
				temp[i] = toupper(temp[i]);	
		}
		else
		{
			temp[i] = tolower(temp[i]);
		}

		if (temp[i] == ' ') space_counter = 0;
		else space_counter++;
	}
	return { temp.begin(), temp.end() };
}

int main()
{
	std::string test = to_weird_case("Weird string case");
	std::string test1 = to_weird_case("This is a test");
	std::cout << test << std::endl;
	std::cout << test1 << std::endl;
	return 0;
}