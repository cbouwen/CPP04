#ifndef WrongCat_HPP
# define WrongCat_HPP

#include <iostream>
#include <string>
#include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal
{
    private:

    protected:

    public:
        //Constructors
        WrongCat();

        //Copy Constructor
        WrongCat(const WrongCat& other);

        //Destructor
        ~WrongCat();

        //Copy assignment operator
        WrongCat& operator=(const WrongCat& other);

        void    makeSound() const;

};

#endif