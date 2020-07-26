/*  C++ Basics 3

    Fix the problem with the code below. Write a comment to explain the output.
*/

#include <iostream>

class A
{
public:
    A(): m_AData(new int()) { std::cout << "Calling A::A() "; }
    ~A()                    { std::cout << "Calling A::~A() "; delete m_AData; }
    void baz()              { std::cout << "Calling A::baz() "; }
    virtual void bar()      { std::cout << "Calling A::bar() "; }
private:
    int* m_AData;
};

class B : public A
{
public:
    B(): m_BData(new int()) { std::cout << "Calling B::B() ";}
    ~B()                    { std::cout << "Calling B::~B() "; delete m_BData; }
    void baz()              { std::cout << "Calling B::baz() "; }
    virtual void bar()      { std::cout << "Calling B::bar() "; }
private:
    int* m_BData;
};

int main(int argc, char* argv[])
{
    A* someA = new B();
    someA->baz();
    someA->bar();
    delete someA;
    B b;
    b.baz();
    b.bar();
}
