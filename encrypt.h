#ifndef ENCRYPT_H_
#define ENCRYPT_H_

namespace aje
{
    class Encrypt
    {
        public:
            Encrypt(const std::string& plain) : _plain(plain) {}

            const std::string& cipher() const { return _cipher; }
            const std::string& plain() const { return _plain; }
        
            virtual void encode() = 0;
            virtual void decode() = 0;
            
        protected:

            std::string _cipher;
            std::string _plain; 
    };

    std::ostream& operator<<(std::ostream& out, Encrypt& en);
    std::istream& operator>>(std::istream& in, Encrypt& en);

    bool read(const std::string& filename, std::string& buffer);
    bool write(const std::string& filename, const std::string& data);
};
#endif