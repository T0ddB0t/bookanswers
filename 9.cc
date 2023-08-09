#include <iostream>
#include <string.h>

struct Data{
    int num;
    char *name;
    Data(char *na = 0, int n = 0){
        name = new char[strlen(na) + 1];
        strcpy(name, na);
        n = num;
    }
    Data(const Data& d){
        name = new char[strlen(d.name)+1];
        strcpy(name, d.name);
        num = d.num;
    }//used to create new paths for the name
    ~Data(){
        if(name != 0)
            delete[] name;
    } //used to free up memory
};
int main(){
    Data data1("davpe ", 12), data2(data1);
    strcpy(data2.name, "nDabe");
    data2.num = 3;
    std::cout << data1.name << data2.name;
}