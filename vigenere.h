#ifndef VIGENERE_H_
#define VIGENERE_H_

#include <string>
#include <vector>

#include "encrypt.h"

namespace aje
{
    class Vigenere : public Encrypt
    {
    public:
        Vigenere(const std::string& plain, const std::vector<unsigned>& key) : Encrypt(plain), _key(key) {}

        void encode() override;
        void decode() override;

    private:
        std::vector<unsigned> _key;
    };
};

#endif
