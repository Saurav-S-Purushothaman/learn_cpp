#include <iostream>

using namespace std;

int main() {
    int a,b;

    a = (b=3,b+2);

    cout << "a: " << a << endl;
    cout << "b: " << b << endl;
    
}