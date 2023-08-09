#include <iostream>

class genClass {
public:
    virtual void pro1(char) = 0;
    virtual void pro2(char) = 0;
};

class derived : public genClass {
public:
    void pro1(char) override; // Match the parameter type
    void pro2(char) override; // Match the parameter type
};

int main() {
    derived obj; // Instantiate the derived class
    genClass *objPtr = &obj; // Use a pointer of the base class type
    objPtr->pro1('O');
    objPtr->pro2('2');
    return 0;
}