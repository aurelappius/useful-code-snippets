#include <iostream>

class myClass
{
public:
    // Constructor + Destructor
    myClass(int arg1, float arg2);
    ~myClass();

    // member functions
    int getPrivateVar1();
    float getPrivateVar2();

    // public variables
    char public_var1;
    float public_var2;

private:
    int private_var1;
    float private_var2;
};

// Constructor definition outside the class
myClass::myClass(int arg1, float arg2)
{
    private_var1 = arg1;
    private_var2 = arg2;
}

// define member functions
int myClass::getPrivateVar1()
{
    return this->private_var1;
}

float myClass::getPrivateVar2()
{
    return this->private_var2;
}

int main()
{
    // Create  objects and call the constructor with different values
    myClass objA(30, 123.2);
    myClass objB(732, 123.09);

    // Print values
    std::cout << "object A: " << objA.getPrivateVar1() << " " << objA.public_var1 << std::endl;
    std::cout << "object B: " << objB.getPrivateVar1() << " " << objB.public_var1 << std::endl;
    return 0;
}