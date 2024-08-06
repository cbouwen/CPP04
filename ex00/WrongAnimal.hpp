#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
    private:

    protected:
        std::string _type;
    public:
        WrongAnimal();
        WrongAnimal(const WrongAnimal& other);
        ~WrongAnimal();
        WrongAnimal& operator=(const WrongAnimal& other);

        //Getters
        std::string getType() const;

        //Setters
        void    setType(const std::string &name);

        //Functions
        void makeSound() const;

};

#endif