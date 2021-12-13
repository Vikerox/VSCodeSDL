#pragma once

#include <iostream>

class MyClass
{
private:
public:
    MyClass()
    {
        std::cout << "Hello World!" << std::endl;
    }
    ~MyClass()
    {
        std::cout << "Goodbye World!" << std::endl;
    }
};