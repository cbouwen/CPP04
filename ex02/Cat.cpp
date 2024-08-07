#include "Cat.hpp"

Cat::Cat()
{
    _type = "Cat";
    _brain = new Brain();
    std::cout << "Cat constructor called!" << std::endl;
}

Cat::~Cat()
{
    delete _brain;
    std::cout << "Cat destructor called!" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    _brain = new Brain(*other._brain);
    std::cout << "Cat copy constructor called!" << std::endl;
}

Cat& Cat::operator=(const Cat &other)
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
void    Cat::makeSound() const
{
    std::cout << getType() << ": Meow" << std::endl;
}
