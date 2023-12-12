#include <iostream>

#include "vigenere.h"

int main(int argc, char* argv[])
{
    aje::Vigenere test("Hello World !", "turing");

    test.encode();
    test.decode();

    std::cout << "cipher : " << test.cipher() << std::endl;
    std::cout << "plain : " << test.plain() << std::endl;

    return 0;
}
