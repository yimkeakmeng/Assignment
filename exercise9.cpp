#include <iostream>
using namespace std;

int main() {
    // Declare an integer variable
    int x = 25;

    // Pointer that stores the address of x
    int* ptr = &x;

    // Display information
    cout << "Value of x: " << x << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Value stored in ptr (address): " << ptr << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    // Change x through the pointer
    *ptr = 99;

    cout << "\nAfter changing *ptr to 99:" << endl;
    cout << "Value of x: " << x << endl;
    cout << "Value pointed to by ptr: " << *ptr << endl;

    return 0;
}