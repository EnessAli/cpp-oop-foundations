#include "PhoneBook.hpp"

int main()
{
    PhoneBook data;
    std::cout << "\nWelcome in PhoneBook" << std::endl;
    while(1)
    {
        std::string content;
        std::cout << "What do you want to do?\n" << std::endl;
        std::cout << "ADD  -  SEARCH  -  EXIT\n" << std::endl;
        
        if (!std::getline(std::cin, content))
        {
            if (std::cin.eof())
            {
                std::cout << "* End of Input Detected *" << std::endl;
                break;
            }
        }
        int i = 0;
        while (content[i])
        {
            content[i] = std::toupper(content[i]);
            i++;
        }

        if (content == "ADD")
            data.add();
        else if (content == "SEARCH")
            data.search();
        else if (content == "EXIT")
        {
            std::cout << "bay bay amigos" << std::endl;
            return (0);
        }
        else
            std::cout << "Only ADD  -  SEARCH  -  EXIT" << std::endl;
    }
}