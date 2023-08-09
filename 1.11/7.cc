//templates allow more flexibility than macros
//because they reduce naming conflicts
//also looks neater
#include <iostream>

template <class T, int size>
class shoot{
public:
    T storage[size];
    void print(T val){
        std::cout << val << std::endl;
    }
};

int main(){
    shoot<int,1> sInt;
    shoot<char,1> sChar;
    sInt.print(1);
    sChar.print('N');
    return 0;
}