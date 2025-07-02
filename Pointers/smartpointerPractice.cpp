#include <iostream>
#include <memory>

class Entity
{
public:
    Entity()
    {
        std::cout << "Created Entity!" << std::endl;
    }
    ~Entity()
    {
        std::cout << "Destroyed Entity!" << std::endl;
    }
    void Print()
    {
        std::cout << "This is a print function";
    }
};
int main()
{
    {
        // One way to make a unqiue pointer to an object.
        std::unique_ptr<Entity> entity(new Entity());
        // Prefered way to make a unique pointer
        std::unique_ptr<Entity> entity2 = std::make_unique<Entity>();
        int x = 5;
        int *p = &x;
    }

    return 0;
}