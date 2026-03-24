#include <iostream>

int main(int argc, char **argv)
{
    int j = 1;

    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    else
    {
        while (j < argc)
        {
            int i = 0;
            while (argv[j][i])
            {
                std::cout << (char) std::toupper(argv[j][i]);
                i++;
            }
            j++;
        }
    }
    std::cout << std::endl;
}