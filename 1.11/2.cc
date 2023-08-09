#include <iostream>
#include <string.h>
//A
// char* f(char *s){ // char *s is never used
//     char ch = 'A'; // isn't a * and is supposed to be returned
//     return &ch; // displays the address not what is inside
// }
char* fFixed(const char *s){
    char *ch = new char[strlen(s) + 1];
    *ch = 'A';
    strcpy(ch, s);
    return ch;
}

int main(){
    //A
    const char *n = "B";
    std::cout << fFixed(n) << std::endl;
    delete[] fFixed(n);
    
    //B
    // char *s1; // needs to be const to be keep it a char 
    // char *s2; // needs to allocate memory for the s2 to be copied in
    // strcpy(s1,s2); // is fine!!<3
    
    const char *s2 = "A";
    char *s1 = new char[strlen(s2) +1];
    *s1 = 'B';
    strcpy(s1,s2);
    std::cout << s1 << std::endl;

    //C
    // char *s2; needs to be const
    // s2 = "B";
    // char *s1;
    // s1 = new char[strlen(s2)]; is good for allocating memory but forgot the + 1 to the strlen
    // strcpy(s1,s2); is fine!!<333
    const char *s22 = "C";
    char *s12 = new char[strlen(s2) + 1];
    *s12 = 'B';
    strcpy(s12,s22);
    std::cout << s12; 
    return 0;
}

