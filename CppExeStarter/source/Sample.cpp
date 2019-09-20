#include <CppDllStarter/Sample.h>
#include <iostream>

auto main(void) -> int
{
    CppDllStarter::Sample sample;

    std::cout << "Square<int>(12): " << sample.Square(12) << std::endl;
    std::cout << "Square<float>(12.2f): " << sample.Square(12.2f) << std::endl;

    return 0;
}