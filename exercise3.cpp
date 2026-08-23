#include <iostream>
using namespace std;

float sum(float a, float b) {
    return a + b;
}

int main() {
    float math;
    float algo;

    cin >> math;
    cin >> algo;

    if (sum(math, algo) <= 50) {
        cout << "fail";
    } else {
        cout << "pass";
    }

    return 0;
}
