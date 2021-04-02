#include <iostream>
#include <string>

using namespace std;

int main() {
    //program to print the number you entered which will break if you enter zero

    int n;
    do {
        cout << "Type a number here: " << endl;
        cin >> n;
        cout << " the number you have entered is " << n << endl;
    } while(n!=0);

    return 0;
}