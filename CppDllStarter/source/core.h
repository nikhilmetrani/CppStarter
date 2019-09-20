#ifndef CPP_DLL_STARTER_CORE_H
#define CPP_DLL_STARTER_CORE_H

#if (defined(_WIN32) || defined(WIN32))
#ifdef CPP_DLL_STARTER_DLL
    #define CPP_DLL_STARTER_EXPORT __declspec(dllexport)
#else
    #define CPP_DLL_STARTER_EXPORT __declspec(dllimport)
#endif
#else
    #define CPP_DLL_STARTER_EXPORT
#endif

#endif //CPP_DLL_STARTER_CORE_H
