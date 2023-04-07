#include <iostream>

using namespace std;

int main()
{
    // bilangan bulat
    unsigned int a = 5; // 34 bit
    long b = 6;
    short c = 7;

    // bilangna desimal
    float d = 1.0;
    double e = 2.5;

    // character
    // char f = "a"; // 1bit

    // boolean
    bool g = true;

    cout << c << endl;
    cout << sizeof(c) << " byte" << endl;
    // cout << numeric_limits<int>::max() << endl;

    // 1 byte === 8 bit
    // memory management menggunakan bytes
    // integer 32bit max value nya 2147483648
    // long 64bit

    cin.get();
    return 0;
}