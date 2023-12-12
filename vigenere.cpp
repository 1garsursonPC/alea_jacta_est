#include "vigenere.h"

namespace aje
{
    void Vigenere::encode()
    {
        _cipher = "";

        size_t key_indice = 0;
        for (auto it = _plain.begin(); it != _plain.end(); it++)
        {

            int ascii_value = int(*it);
            ascii_value -= 32; // Removes the non-printable range, can overflow if in this range
            ascii_value += _key.at(key_indice); // Encrypt
            ascii_value %= (127 - 32);
            ascii_value += 32; // Convert back to valid ascii

            _cipher.push_back(char(ascii_value));

            if (key_indice >= _key.size() - 1)
                key_indice = 0;
            else
                key_indice++;
        }
    }

    void Vigenere::decode()
    {
        _plain = "";

        size_t key_indice = 0;
        for (auto it = _cipher.begin(); it != _cipher.end(); it++)
        {

            int ascii_value = int(*it);
            ascii_value -= 32; // Removes the non-printable range, can overflow if in this range
            ascii_value -= _key.at(key_indice); // Encrypt
            ascii_value %= (127 - 32);
            ascii_value += 32; // Convert back to valid ascii

            _plain.push_back(char(ascii_value));

            if (key_indice >= _key.size() - 1)
                key_indice = 0;
            else
                key_indice++;
        }
    }
}

