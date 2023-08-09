#include <iostream>

class classA{
private:
    int n = 0;
protected:
    int m = 1;
public:
    int k = 2;
};
class classB : public virtual classA{
private:
    //classA::n; is private so can't used in other classes
    classA::m; //is only protected so can be used only
              //in other classes unless it is changes
             //it/transforms it so doesn't show what the
            //original value is then it can be used anywhere
    classA::k; //is public so can be used anywhere
protected:
    classA::m;
    classA::k;
public:
    classA::m;
    classA::k;
};

int main(){
    classB b;
    //b.m; isn't able to be accessed because it was changed
    //b.k; into priv and would do the same with prot
    //would only be accessible by putting the vals in publ
}