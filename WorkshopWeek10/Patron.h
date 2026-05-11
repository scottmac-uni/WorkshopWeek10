#pragma once
#include <string>

class Patron
{
public:
    Patron(int id, std::string name) : id(id), name(name) {};
    ~Patron() = default;
    int id;
    std::string name;
};

