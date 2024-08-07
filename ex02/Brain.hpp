#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>
#include <string>

class Brain
{
    private:
        std::string _ideas[100];
    protected:

    public:
        //Constructors
        Brain();

        //Copy Constructor
        Brain(const Brain& other);

        //Destructor
        ~Brain();

        //Copy assignment operator
        Brain& operator=(const Brain& other);

};

#endif