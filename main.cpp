#include <iostream>

#include "caesar.h"

int main(int argc, char* argv[])
{
    std::string data;
    aje::read("phrase.txt", data); 

    aje::Caesar caesar(data, 3);

    std::cout << "Encodé: " << std::endl;
    std::cout << caesar.cipher() << std::endl;

    std::cout << "Décodé: " << std::endl;
    caesar.decode();
    std::cout << caesar.plain();

    return 0;
}
