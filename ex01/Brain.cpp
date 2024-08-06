#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Default constructor called!" << std::endl;
}

Brain::~Brain()
{
    std::cout << "Destructor called!" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Copy constructor called!" << std::endl;
}

Brain& Brain::operator=(const Brain &other)
{
    if(this != &other)
    {
        for (int i = 0; i < 100; ++i)
            _ideas[i] = other._ideas[i];
    }
    return *this;
}
