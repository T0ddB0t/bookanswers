#include "10.h"


// char genClass::aFunction(char *name){
//     std::cout << *name << T << std::endl;
// }; the template wasn't re-defined in the definition of
//the class

template <class T>
char genClass<T>::aFunction(char *name){
    std::cout << *name << T << std::endl;
};
