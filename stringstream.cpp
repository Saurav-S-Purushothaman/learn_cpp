#include <iostream>
#include <string>
#include <sstream>  // this is used to use string object as stream

using namespace std;

int main() {
    ////////////////////////////////////
    string mystring = "1234";
    int myint;

    stringstream(mystring) >> myint;

    cout << myint;

    //////////////////////////////////
    string mystr;
    float price;

    cout << "Enter the price : " <<  endl;

    getline(cin, mystr);

    stringstream(mystr) >> price;

    cout << "Your price is " << price<< endl;

    return 0;
}