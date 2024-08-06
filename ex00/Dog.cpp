#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    std::cout << "Dog constructor called!" << std::endl;
}

Dog::~Dog()
{
    std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor called!" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    if(this != &other)
    {
        _type = other._type;
    }
    return *this;
}

//Functions
void    Dog::makeSound() const
{
    std::cout << getType() << ": Bark" << std::endl;
}
