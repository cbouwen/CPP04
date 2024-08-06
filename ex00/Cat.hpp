#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include <string>
#include "Animal.hpp"

class Cat : public Animal
{
    private:

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