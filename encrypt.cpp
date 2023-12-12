#include "encrypt.h"

#include <istream>
#include <ostream>
#include <fstream>
#include <string>
#include <sstream>

namespace aje
{
    Encrypt::Encrypt(const std::string& plain) : _plain(plain) 
    {
    }

    const std::string& Encrypt::operator<<(const std::string& in)
    {
        _plain = in;
        encode();
        return _cipher;
    }

    std::string& Encrypt::operator>>(std::string& out)
    {
        out += _cipher;
        return out;
    }

    bool read(const std::string& filename, std::string& buffer)
    {
        std::ifstream in(filename, std::ifstream::in);
        std::stringstream stream;
        stream << in.rdbuf();
        buffer = stream.str();

        in.close();
        return true;
    }

    bool write(const std::string& filename, const std::string& data)
    {
        std::ofstream out(filename, std::ofstream::out);
        out << data;
        out.close();
        return true;
    }

    BasicEncrypt::BasicEncrypt(const std::string& plain) : Encrypt(plain)
    {
        encode();
    } 

    void BasicEncrypt::encode()
    {
        _cipher = _plain;
    }

    void BasicEncrypt::decode()
    {
        _plain = _cipher;
    }
} // namespace aje
