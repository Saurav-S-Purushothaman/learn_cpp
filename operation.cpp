#include <iostream>

using namespace std;

int main() {
    const int a = 5;
    int b;
    int c;

    b = a + (c = 5);

    cout << a << endl << b << endl << c;
}
