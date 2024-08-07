#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main() 
{
    const Animal *meta[10];

    Dog basic;
    {
        Dog tmp = basic;
    }   
	for (int i = 0; i < 10; i++)
	{
		if (i % 2)
		{
			meta[i] = new Cat();
			if (meta[i] == NULL)
			{
				std::cout << "Cat allocation failed" << std::endl;
				std::cerr << "Exiting process now";
				return(1);
			}
		}
		else
		{
			meta[i] = new Dog();
			if (meta[i] == NULL)
			{
				std::cout << "Dog allocation failed" << std::endl;
				std::cerr << "Exiting process now";
				return(1);
			}
		}
	}

    for (int i = 0; i < 10; i++)
	{
		std::cout << std::endl;
		std::cout << "Animal type: " << meta[i]->getType() << std::endl;
		meta[i]->makeSound();
		std::cout << std::endl;
	}
	std::cout << std::endl;

	for (int i = 9; i > -1; i--)
		delete(meta[i]);

    return 0;
}
