#include <iostream>
#include <string>

// Example Entity class
class Entity
{
public:
    // public method called 'GetName' that just returns "Entity"
    std::string GetName() { return "Entity"; }
};

// Example Player class that inherits the Entity class, i.e. subclass
class Player : public Entity
{
private:
    // declaring a string variable to store the name
    std::string m_Name;

public:
    // public constructor that allows us to specify a name
    Player(const std::string &name)
        : m_Name(name) {}

    // method 'GetName' again to return the name that is the member
    std::string GetName() { return m_Name; }
};

int main()
{
    // created new Entity
    Entity *e = new Entity;
    // print the GetName from the Entity
    std::cout << e->GetName() << std::endl;

    // created new Player
    Player *p = new Player("AchroDev");
    // print the GetName from the Player member
    std::cout << p->GetName() << std::endl;

    // Example of trying to refer to the Player as if it was an Entity
    Entity *entity = p;
    std::cout << entity->GetName() << std::endl; // Prints Entity instead of the Player name because it has the type Entity

    std::cin.get();
}
