#include <iostream>
#include "encrypt.h"

class Test : public aje::Encrypt
{
    public:
        Test() : Encrypt("bonjour") {};

        void decode() override
        {

        }

        void encode() override{}
};

int main(int argc, char* argv[])
{
    Test test;

    return 0;
}
