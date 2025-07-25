#include <iostream>

using namespace std;

int main() {
    int a, b ,c ,d , e ;

    b = 3;
    a = ++b;  // here a becomes 4 and b becomes 4;
    cout << "a: " << a << endl << "b: " << b << endl;

    c = 5;
    e = c++; // here e becomes 5 itself an c becomes  6;
    cout << "c : " << c << endl << "e: " << e << endl;

}
