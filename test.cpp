#include <iostream>
#include <windows.h>

int main() 
{
    std::string char_set_alphabet = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    std::string char_set_number = "0123456789";
    std::string char_set_special = "!@#$%^&*()-_=+[]{}|;:',.<>?";
    std::string char_set_space = " ";
    
    std::string char_set = char_set_space + char_set_alphabet + char_set_number + char_set_special;
    std::string input_str = "Hello, World!";
    std::string output_str;

    for(int i = 0; i < input_str.size(); i++) 
    {
        for(int j = 0; j < char_set.size(); j++) 
        {   
            std::cout << output_str + char_set[j] << std::endl;
            Sleep(20); // Sleep for 20 milliseconds

            if(input_str[i] == char_set[j])         
            {
                output_str += char_set[j];
                break;
            }
        }
    }
    
    return 0;
}