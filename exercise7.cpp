#include <iostream>
using namespace std;

int main() {
    int var;
    int count_Vwl = 0;

    cin >> var;

    char arr[var];

    for (int i = 0; i < var; i++) {
        cin >> arr[i];
    }

    for (int i = 0; i < var; i++) {
        if (arr[i] == 'a' || arr[i] == 'e' ||
            arr[i] == 'i' || arr[i] == 'o' ||
            arr[i] == 'u' || arr[i] == 'A' ||
            arr[i] == 'E' || arr[i] == 'I' ||
            arr[i] == 'O' || arr[i] == 'U') {
            count_Vwl++;
        }
    }

    cout << "Number of vowels = " << count_Vwl << endl;

    return 0;
}