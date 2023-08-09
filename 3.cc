#include <iostream>

int main(){
    int intArray[] = {1,2,3}, *p = intArray;
    *p++;//a will go to the next item in the list
    (*p)++;//b is same as a, will go to next list item
    //c if you uncomment both a and b you will go to the 3rd item in the list
    std::cout << *p << std::endl;
}