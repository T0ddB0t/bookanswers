#include "Quaterion.h"

int main(){
    Quaternion<int> I(0,1,0,0);
    Quaternion<int> J(0,0,1,0);
    Quaternion<int> K(0,0,0,1);
    Quaternion<int> ONE(-1,0,0,0);
    Quaternion<int> II = I * I; 
    Quaternion<int> JJ = J * J;
    Quaternion<int> KK = K * K;
    Quaternion<int> IJK = I * J * K;
    Quaternion<int> IJ = I * J;
    Quaternion<int> IK = I * K;
    Quaternion<int> JK = J * K;
    Quaternion<int> KI = K * I;
    Quaternion<int> KJ = K * I;
    Quaternion<int> JI = J * I;
    cout << JK;
    return 0;
}