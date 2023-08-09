#include <iostream>

int main(){
    int *i,*p,*q;
    *i = 3;
    *p = 2;
    *q = 1;
    //p = &i; a is wrong because of i would become a ** and wouldn't be compatible with p which is a *
    p = *&i; //b is good because the * cancels the & to not make it a **
    p = &*i; //c is the same reason as b where the & cancels the * to not make it a int *
    //i = *&*p; d is wrong because 
    i = *&p; //e is good because of the same reason as b and c where * cancels the & to make it a * and not a ** or int *
    i = &*p; //f is good because of the same reason as b, c, and e where the & cancels the * to make it a * and not a ** or int *
    //p = &*&i; g is wrong because the the * only cancels one of the & and not the other making a int *
    //q = *&*p; h is the same reason as g where the & only cancels one of the * and not the other making a int *
    //q = **&p; i is the * cancels the & but it can't cancel the * so it makes it a int *
    q = *&p; //j is good because * cancels the &
    q = &*p; //k is good because & cancels the *  
}