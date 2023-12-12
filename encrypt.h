#ifndef ENCRYPT_H_
#define ENCRYPT_H_

#include <string>

namespace aje
{
    class Encrypt
    {
        public:
            Encrypt(const std::string& plain);

            const std::string& cipher() const { return _cipher; }
            const std::string& plain() const { return _plain; }
        
            virtual void encode() = 0;
            virtual void decode() = 0;
            
            std::string& operator>>(std::string& out);
            const std::string& operator<<(const std::string& in);
        
        protected:

            std::string _cipher;
            std::string _plain; 
    };

    class BasicEncrypt : public Encrypt
    {
        public:
            BasicEncrypt(const std::string& plain);

            void encode() override;
            void decode() override;
    };

    bool read(const std::string& filename, std::string& buffer);
    bool write(const std::string& filename, const std::string& data);
};
#endif