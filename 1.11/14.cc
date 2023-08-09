//the virtual keyword helps with function ambiguity especially 
//when a baseClass has a function or var with the same name
//in a different class
#include <iostream>

class BaseClass{
public:
    void car(const char *s = "1234567890"){
        std::cout << "is in " << *s << std::endl;
        delete[] s;
    }
};
class Derived : public virtual BaseClass{
public:
    void car(const char *s = "1234567890"){
        std::cout << "is in " << *s << std::endl;
        BaseClass::car("Derived");
        delete[] s;
    }
};
int main(){
    Derived d;
    d.car("Main");

    

    return 0;
}