#include <iostream>
using namespace std;

void doubleByValue(int x) {
    x = x * 2;
}

void doubleByReference(int &x) {
    x = x * 2;
}

int main() {
    int num = 10;

    doubleByValue(num);
    cout << "After doubleByValue: " << num << endl;

    doubleByReference(num);
    cout << "After doubleByReference: " << num << endl;

    return 0;
}