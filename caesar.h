#include "encrypt.h"

namespace aje
{
    class Caesar: public Encrypt
    {
        public:
            Caesar(const std::string& plain, int shift);

            void encode() override;
            void decode() override;

        private:
            int _shift;
    };
}