#include <iostream>

class Animal
{
public:
    virtual std::string getAnimalType() = 0;
};

class Cat : virtual public Animal
{
public:
    virtual std::string getAnimalType()
    {
        return "cat";
    }
};

class Dog : virtual public Animal
{
public:
    virtual std::string getAnimalType()
    {
        return "dog";
    }
};

void meeting(Animal* a, Animal* b)
{
    std::cout << "Animals meeting:\n";
    //1
    if(a->getAnimalType() == "cat" && b->getAnimalType() == "dog")
    {
        std::cout << "Meow! Bark!" << std::endl;
    }
    //2
    if(a->getAnimalType() == "cat" && b->getAnimalType() == "cat")
    {
        std::cout << "Purr Purr" << std::endl;
    }
    //3
    if(a->getAnimalType() == "dog" && b->getAnimalType() == "cat")
    {
        std::cout << "Bark! Meow!" << std::endl;
    }
    //4
    if(a->getAnimalType() == "dog" && b->getAnimalType() == "dog")
    {
        std::cout << "Woof! Woof!" << std::endl;
    }

    std::cout << std::endl;
}

int main()
{
    Animal* a = new Cat();
    Animal* b = new Dog();
    meeting(a, b);
    meeting(a, a);
    meeting(b, b);
    meeting(b, a);

    return 0;
}
