#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>
#include <string>

class Animal
{
    private:

    protected:
        std::string _type;
    public:
        Animal();
        Animal(const Animal& other);
        virtual ~Animal();
        Animal& operator=(const Animal& other);

        //Getters
        std::string getType() const;

        //Setters
        void    setType(const std::string &name);

        //Functions
        virtual void makeSound() const = 0;

};

#endif