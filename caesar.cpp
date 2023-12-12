#include "caesar.h"
#include <iostream>

#define BEG_ASCII 97

namespace aje
{
    Caesar::Caesar(const std::string& plain, int shift): Encrypt(plain), _shift(shift)
    {
        encode();
    }

    void Caesar::encode()
    {
        _cipher = "";
        for(auto c : _plain)
        {
            int ord = static_cast<int>(c) - BEG_ASCII;
            char letter = c;

            if(ord >= 0 && ord <= 26)
            {
                int index = (ord + _shift) % 26;
                letter = static_cast<char>(index + BEG_ASCII);
            }
            
            _cipher += letter;
        }
    }

    void Caesar::decode()
    {
        _plain = "";
        for(auto c : _cipher)
        {
            int ord = static_cast<int>(c) - BEG_ASCII;
            char letter = c;

            if(ord >= 0 && ord <= 26)
            {
                int index = (ord - _shift) % 26;
                if(index < 0)
                    index += 26;

                letter = static_cast<char>(index + BEG_ASCII);
            }
            
            _plain += letter;
        }
    }

    Caesar2::Caesar2(const std::string& plain, int shift) : Encrypt(plain), _shift(shift)
    {
        encode();
    }

    void Caesar2::encode()
    {
        _cipher = "";
        for(char c : _plain)
            _cipher += c + _shift;
    }

    void Caesar2::decode()
    {
        _plain = "";
        for(char c : _cipher)
            _plain += c - _shift;
    }
}