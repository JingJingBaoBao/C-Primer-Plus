#include <iostream>

class Entity {
public:
    Entity(){};
    void Func(int a)
    {
        std::cout << "Entity" << std::endl;
    }
    virtual void Show()
    {
        std::cout << "ent" << std::endl;
    }
};

class Person : public Entity {
public:
    Person() {};
    void Func(int a)
    {
        std::cout << "Person" << std::endl;
    }
    
    void Show()
    {
        std::cout << "per" << std::endl;
    }
};

int main()
{
    Entity* e = new Person();
    e->Func(0); // 输出 Entity
    e->Show(); 
}