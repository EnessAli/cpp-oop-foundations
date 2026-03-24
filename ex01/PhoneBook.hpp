#ifndef PHONEBOOK_H
#define PHONEBOOK_H

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
private:
    int index;
    int size;
    Contact list[8];
public:
    
    PhoneBook();
    void add();
    void search(); 
    void showall();
};

#endif