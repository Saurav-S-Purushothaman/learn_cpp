#include <iostream>
#include <string>
#include <iomanip>


using namespace std;

//reading data and some method to do it

int main() {
    char ch; double d;
    scanf("%c %lf" , &ch, &d);
    cout << ch << endl;
    cout << fixed << setprecision(3) << d << endl;


    //same thing can be achieved here
    printf("%c %.3lf",ch,d);
}
