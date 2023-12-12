#include <iostream>

#include "encrypt.h"

int main(int argc, char* argv[])
{
    aje::BasicEncrypt basic("bonjour");
    std::string cipher;
    basic >> cipher;
    std::cout << cipher << std::endl;
    basic << "hello";
    basic >> cipher;
    std::cout << cipher << std::endl;
    return 0;
}
