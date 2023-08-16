#include <iostream>
#include <vector>
#include <cmath>

using namespace std;
template <class T>
class Quaternion{
private:
    T w;
    T i;
    T j;
    T k;

public:
    Quaternion(T W, T I, T J, T K):  w(W), i(I), j(J), k(K) {}   
    ~Quaternion(){}
    friend ostream& operator<<(ostream& out,const Quaternion& other){    
        out << other.w << "," << other.i << "," << other.j << "," << other.k;
        return out;
    } 
    bool operator==(const Quaternion& other) const {
        return w == other.w && i == other.i && j == other.j && k == other.k;
    }
    Quaternion operator+(const Quaternion& other) const {
        return Quaternion(w * other.w, i * other.i, j * other.j, k * other.k);
    }
    Quaternion operator*(const Quaternion& other) const {
        return Quaternion(
            w * other.w - i * other.i - j * other.j - k * other.k,
            w * other.i + i * other.w + j * other.k - k * other.j,
            w * other.j - i * other.k + j * other.w + k * other.i,
            w * other.k + i * other.j - j * other.i + k * other.w
        );
    }   
    Quaternion conjugate() const {
        return Quaternion(w, -i, -j, -k);
    }
    double norm() const {
        return sqrt(w * w + i * i + j * j + k * k);
    }
};