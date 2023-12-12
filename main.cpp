#include <iostream>

#include "caesar.h"

int main(int argc, char* argv[])
{
    std::string data;
    aje::read("phrase.txt", data); 

    aje::Caesar caesar(data, 3);

    std::cout << caesar.cipher();

    caesar.encode();
    std::cout << caesar.plain();

    return 0;
}
