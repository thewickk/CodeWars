#include <vector>
#include <string>
#include <iostream>


const std::vector<char> alphabet = {
    'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm',
    'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'
};

const int rot13_distance{ 13 };
const int alpha_minus_rot{ 12 };

std::string rot13(std::string msg)
{
    std::string returnString{};

    // iterate through each letter in the passed in msg:
    for (const auto& letter : msg)
    {
        // we need a variable to keep track if the letter from msg is upper or lower cased
        bool charIsUpper = false;

        // now we need to check if the letter is actually a letter, not number or special character
        if (isupper(letter) || islower(letter))
        {
            // set charIsUpper accordingly
            if (isupper(letter)) charIsUpper = true;

            // now we need to find the letter in the alphabet, since our const alpabet is all lower cased
            // we will force the letter to be lower cased for now
            auto it = std::find(alphabet.begin(), alphabet.end(), tolower(letter));
            // simple error check to make sure we are within the vector
            if (it != alphabet.end())
            {
                // get the index of the iterator
                // https://cplusplus.com/forum/general/45931/
                int charDistance = std::distance(alphabet.begin(), it);

                // save a temp char to append, we will convert this to upper or lower before appending
                char tempChar{};

                // We need to handle the wrap-around of the alphabet, basically if the index of the letter plus 13 (the rot13 distance)
                        // we have to wrap around to the beginning of the alphabet
                if (charDistance > alpha_minus_rot)
                {
                    // this is the formula I came up with to handle the wrap around
                    // basically charIndex + 13 - 26. Added names to avoid "magic numbers"
                    int index = (charDistance + rot13_distance) - alphabet.size();
                    // Assign the ROT13 ciphered character
                    tempChar = alphabet[index];
                }
                // If the index of the letter plus the rot13 distance is less than the length of the alphabet we can safely
                        // take the letter that is 13 letters away from the msg's letter
                else if (charDistance <= alpha_minus_rot)
                {
                    // Assign the ROT13 ciphered character
                    tempChar = alphabet[charDistance + rot13_distance];
                }

                // Now we have to handle returning the correct case
                if (charIsUpper) returnString += toupper(tempChar);
                if (!charIsUpper) returnString += tempChar;
            }
        }

        // The letter in the message was a number or special character, just append it
        else
        {
            returnString += letter;
        }
    }
    return returnString;
}

int main()
{
    std::string returnString = rot13("Ab8+_!Cd");
	std::cout << "Return String: " << returnString << std::endl;

	return 0;
}