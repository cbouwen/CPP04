#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    std::cout << "Cat constructor called!" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
{
    if(this != &other)
    {
        _type = other._type;
    }
    return *this;
}

//Functions
void    Cat::makeSound() const
{
    std::cout << getType() << ": Meow" << std::endl;
}
