#pragma once
#include <string>

class Person
{
public:
    Person(std::string name) : name(name) {};
    ~Person() = default;
    std::string name;
};
