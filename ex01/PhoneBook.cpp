#include "PhoneBook.hpp"
#include <iomanip>
#include <string>
#include <cstdlib>

PhoneBook::PhoneBook()
{
    index = 0;
    size = 0;
}

int checkInput(std::string &input)
{
    if (!std::getline(std::cin, input))
    {
        if (std::cin.eof())
        {
            std::cout << "* End of Input Detected *" << std::endl;
            return 1;
        }
    }
    return 0;
}

std::string charlimited(std::string str)
{
	if(str.length() > 10)
		return(str.substr(0,9) + ".");
	return(str);
}

void PhoneBook::showall()
{
    for(int i = 0; i < this->size && i < 8; i++)
    {
        std::cout << "|" << std::setw(10) << i + 1;
        std::cout << "|" << std::setw(10) << charlimited(list[i].getFirstName());
        std::cout << "|" << std::setw(10) << charlimited(list[i].getLastName());
        std::cout << "|" << std::setw(10) << charlimited(list[i].getNickName());
        std::cout << "|" << std::endl;
    }
    std::cout << "---------------------------------------------" << std::endl;
}

void PhoneBook::add()
{
    std::string input;
    index = this->size % 8;

    while (true) {
        std::cout << " What is the person's first name? " << std::endl;
        if (checkInput(input)) return;
        if (!input.empty()) 
        {
            list[index].setFirstName(input);
            break;
        }
        std::cout << "Input cannot be empty. Please enter a valid first name.\n" << std::endl;
    }

    while (true) {
        std::cout << " What is the person's last name? " << std::endl;
        if (checkInput(input)) return;
        if (!input.empty()) 
        {
            list[index].setLastName(input);
            break;
        }
        std::cout << "Input cannot be empty. Please enter a valid last name.\n" << std::endl;
    }

    while (true) {
        std::cout << " What is the person's nickname? " << std::endl;
        if (checkInput(input)) return;
        if (!input.empty()) 
        {
            list[index].setNickName(input);
            break;
        }
        std::cout << "Input cannot be empty. Please enter a valid nickname.\n" << std::endl;
    }
    
    while (true) {
        std::cout << " What is the person's phone number? " << std::endl;
        if (checkInput(input)) return;
        if (!input.empty()) 
        {
            list[index].setNumber(input);
            break;
        }
        std::cout << "Input cannot be empty. Please enter a valid phone number.\n" << std::endl;
    }
    
    while (true) {
        std::cout << " What is his darkest secret? " << std::endl;
        if (checkInput(input)) return;
        if (!input.empty()) 
        {
            list[index].setDarkestSecret(input);
            break;
        }
        std::cout << "Input cannot be empty. Please enter a valid darkest secret.\n" << std::endl;
    }
    this->size += 1;
}


void PhoneBook::search()
{
    std::cout << "⬇ -- Here's what's currently in the directory -- ⬇" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    std::cout << "|   Index  |First Name| Last Name| Nick Name|" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;

    showall();

    std::cout << "enter index number to see contact details or exit by clicking zero\n" << std::endl;
    std::string indis;
    std::getline(std::cin, indis);

    if (indis.empty() || indis.length() > 1 || indis.compare("0") < 0 || indis.compare("8") > 0)
    {
        std::cout << "Invalid index. Please try again.\n" << std::endl;
        return;
    }

    else
    {
        int a = atoi(indis.c_str());
        if (a == 0)
    {
        std::cout << "Exiting to main menu..." << std::endl;
        return;
    }
        std::cout << "First name ->     " << list[a - 1].getFirstName() << std::endl;
        std::cout << "Last name ->      " << list[a - 1].getLastName() << std::endl;
        std::cout << "Nick name ->      " << list[a - 1].getNickName() << std::endl;
        std::cout << "Phone Number ->   " << list[a - 1].getNumber() << std::endl;
        std::cout << "Darkest Secret -> " << list[a - 1].getDarkestSecret() << std::endl;
    }
}
