#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Dog : public Animal
{
    private:

    protected:

    public:
        //Constructors
        Dog();

        //Copy Constructor
        Dog(const Dog& other);

        //Destructor
        virtual ~Dog();

        //Copy assignment operator
        Dog& operator=(const Dog& other);

        virtual void makeSound() const;

};

#endif