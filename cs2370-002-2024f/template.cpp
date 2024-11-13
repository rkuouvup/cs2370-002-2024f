#include <iostream>
using namespace std;

/*class mypair {
private:
    int a;
    int b;
public:
    mypair(int first=0, int second=0) : a(first), b(second) {}
    int max() {int m = a > b ? a : b; return m;}
};*/

template<typename T>
class mypair {
private:
    T a;
    T b;
public:
    mypair(T first, T second) : a(first), b(second) {}
    T max();
};

template<typename T>
T mypair<T>::max() {
    T m = a > b ? a : b;
    return m;
}


int main() {
    mypair p1(2, 3);
    mypair p2('a', 'Z');
    cout << "max of 2 and 3 is " << p1.max() << endl;
    cout << "max of a and Z is " << p2.max() << endl;
    return 0;
}






// int TripleMin(int i1, int i2, int i3);
/*
 {
    int mintemp = i1;
    if (i2 < mintemp)
        mintemp = i2;
    if (i3 < mintemp)
        mintemp = i3;
    return mintemp;
 }
 */

// double TripleMin(double d1, double d2, double d3);

template<typename T1, typename T2> // template <typename TheType>
T1 TripleMin(T1 item1, T1 item2, T2 item3) {
    T1 mintemp = item1;
    if (item2 < mintemp)
        mintemp = item2;
    if (item3 < mintemp)
        mintemp = item3;
    return mintemp;
}


/*int main() {
    int i1 = 5;
    int i2 = 1;
    int i3 = 6;
    
    double d1 = 2.3;
    double d2 = 7.8;
    double d3 = -3.2;
    
    
    cout << "min int: " << TripleMin(i1, i2, i3) << endl;
    cout << "min double: " << TripleMin(d1, d2, i3) << endl;
    
    
    return 0;
}*/
