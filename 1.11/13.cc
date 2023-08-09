#include <iostream>

template <class genType, int size = 50>//has a set size
class genClass{//which limits the amt of values you can 
    genType storage[size]; //have in this type
public: //which is useful when you have a limit on CPU or RAM
    void Fun(genType var){//power
        if(var < size){
            std::cout << "Yay, what fun!!!" << std::endl;
        }else{
            std::cout << "No <3" << std::endl;
        }
    }    
};
template <class genType>//this type doesn't have a fixed size 
class genClass2{ //which can be useful if you dont want a set
public: // amt of storage, but it could lead to cpu problems 
    void Fun(genType var){//later on
        if(var < 59){
            std::cout << "Yay, what fun!!!" << std::endl;
        }else{
            std::cout << "No <3" << std::endl;
        }
    }    
};
int main(){
    genClass<int,90> gc;
    gc.Fun(91);
    genClass2<int> gc2;
    gc2.Fun(23);
}