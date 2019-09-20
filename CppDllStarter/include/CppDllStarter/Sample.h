#ifndef CPP_DLL_STARTER_SAMPLE_H
#define CPP_DLL_STARTER_SAMPLE_H

#include "../../source/core.h"

namespace CppDllStarter
{
    class CPP_DLL_STARTER_EXPORT Sample
    {
        public:
        auto MultiplyByTwo(int a) const -> int;
        template<typename T>
        auto Square(const T& a) const -> decltype(a * a)
        {
            return a * a;
        }


    };
} // namespace CppDllStarter

#endif //CPP_DLL_STARTER_SAMPLE_H
