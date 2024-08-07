#include "Dog.hpp"

Dog::Dog()
{
    _type = "Dog";
    _brain = new Brain();
    std::cout << "Dog constructor called!" << std::endl;
}

Dog::~Dog()
{
    delete _brain;
    std::cout << "Dog destructor called!" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    _brain = new Brain(*other._brain);
    std::cout << "Dog copy constructor called!" << std::endl;
}

Dog& Dog::operator=(const Dog &other)
{
    if(this != &other)
    {
        Animal::operator=(other);
        delete _brain;
        _brain = new Brain(*other._brain);
    }
    return *this;
}

//Functions
void    Dog::makeSound() const
{
    std::cout << getType() << ": Bark" << std::endl;
}
