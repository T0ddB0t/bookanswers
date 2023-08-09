#include <iostream>
#include <string.h>

int main(){
    char *x = new char[3];
    strcpy(x, "ij*");
    char *y = new char[3];
    strcpy(x, "ij*");
    char *z = new char[3];
    strcpy(x, "ij*");
    char *i;
    *i = 'i';
    strlen(x);
    strcmp(x,y);
    strcat(z,y);
    strchr(x,*i);
}