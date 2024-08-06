#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
    std::cout << "WrongAnimal constructor called!" << std::endl;
}

WrongAnimal::~WrongAnimal()
{
    std::cout << "WrongAnimal destructor called!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& other) : _type(other._type)
{
    std::cout << "WrongAnimal copy constructor called!" << std::endl;
}

WrongAnimal&   WrongAnimal::operator=(const WrongAnimal &other)
{
    if(this != &other)
    {   
        _type = other._type;
    }   
    return *this;
}

//Functions
void    WrongAnimal::makeSound() const
{
    std::cout << "Some generic WrongAnimal noise" << std::endl;
}

std::string WrongAnimal::getType() const
{
    return _type;
}

void    WrongAnimal::setType(const std::string &name)
{
    this->_type = name;
}