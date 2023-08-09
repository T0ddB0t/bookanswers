#include <iostream>

//A: adding all the numbers in an array with no array indexing
void add(int x[], int amt){
    int *list = x;
    int result = 0;
    for(int i = 0; i < amt; i++){
        //c = *list++;
        result += *list++;
    }
    std::cout << result << std::endl;
}

//B removing all odds from an array
void cleanOdd(int* x, int amt, int *nAmt){
    int* result = (int*)malloc(sizeof(int) * amt);
    *nAmt = 0;
    for(int i = 0; i < amt; i++){
        if(x[i] % 2 == 0){
            result[*nAmt] = x[i];
            *nAmt++;
        }
    }
    for(int i = 0; i < *nAmt; i++){
        std::cout << *result++ << std::endl;
    }
}//keep the list organized to prevent memory leaks
int main(){
    int size = 4;
    int intArray[] = {1,2,3,4};
    int nSize;
    cleanOdd(intArray,size, &nSize);
    add(intArray,size);
    return 0;
}