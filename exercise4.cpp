#include <iostream>
using namespace std;
int main() {
    float score;
    cout<<"Enter the score:";
    cin >> score;

    if (score<=100 && score>=90 ) {
        cout << "Grade:A";
    } else if(score<=90 && score>=89 ){
        cout << "Grade:B";
    } else if(score<=79 && score>=70 ){
        cout << "Grade:C";
    } else if(score<=69 && score>=60  ){
        cout << "Grade:D";
    } else if(score<60){
        cout<< "grade:F";
    } 

    return 0;
}
