#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
    private:
        Brain   *_brain;
    protected:

    public:
        //Constructors
        Cat();

        //Copy Constructor
        Cat(const Cat& other);

        //Destructor
        virtual ~Cat();

        //Copy assignment operator
        Cat& operator=(const Cat& other);

        virtual void    makeSound() const;

};

#endif