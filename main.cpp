#include <iostream>

#include "vigenere.h"

int main(int argc, char* argv[])
{
    aje::Vigenere test("Hell0 WOrld !", {3, 1, 5, 2});

    test.encode();
    test.decode();

    std::cout << "cipher : " << test.cipher() << std::endl;
    std::cout << "plain : " << test.plain() << std::endl;

    return 0;
}
