#include <iostream>
#include <string>

using namespace std;

int add(int a, int b){
    int r;
    r = a + b;
    return r;
}

int main() {
    int x = add(5,6);
    cout << x;
}
