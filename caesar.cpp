#include "caesar.h"

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
            _cipher += static_cast<char>(static_cast<int>(c) + _shift);
        }
    }

    void Caesar::decode()
    {
        _plain = "";
        for(auto c : _cipher)
        {
            _plain += static_cast<char>(static_cast<int>(c) - _shift);
        } 
    }
}