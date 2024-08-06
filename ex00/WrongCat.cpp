#include "WrongCat.hpp"

WrongCat::WrongCat()
{
    _type = "WrongCat";
    std::cout << "WrongCat constructor called!" << std::endl;
}

WrongCat::~WrongCat()
{
    std::cout << "WrongCat destructor called!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& other) : WrongAnimal(other)
{
    std::cout << "WrongCat copy constructor called!" << std::endl;
}

WrongCat& WrongCat::operator=(const WrongCat &other)
{
    if(this != &other)
    {
        _type = other._type;
    }
    return *this;
}

//Functions
void    WrongCat::makeSound() const
{
    std::cout << getType() << ": Bark" << std::endl;
}
