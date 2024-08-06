#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal constructor called!" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor called!" << std::endl;
}

Animal::Animal(const Animal& other) : _type(other._type)
{
    std::cout << "Animal copy constructor called!" << std::endl;
}

Animal&   Animal::operator=(const Animal &other)
{
    if(this != &other)
    {   
        _type = other._type;
    }   
    return *this;
}

//Functions
void    Animal::makeSound() const
{
    std::cout << "Some generic animal noise" << std::endl;
}

std::string Animal::getType() const
{
    return _type;
}

void    Animal::setType(const std::string &name)
{
    this->_type = name;
}