#include <iostream>

int a(){
    int *p, *q = new int;
    *p = 2;
    *q = 2;
    int out = 0;
    if(*p == *q){
        out = *p + *q;
        delete p,q;
        return out;
    }else{
        out = *p - *q;
        delete p,q;
        return out;
    }
}
int b(){
    int p, q;
    p = 2;
    q = 2;
    if(p == q){
        return p + q;
    }else{
        return p - q;
    }
}
int main(){
    std::cout << a() << std::endl;
    std::cout << b();
    //the diff is that a requires more steps than b because
    //a is using pointers and they need to relinquish the
    //the memory that they're using
    return 0;
}