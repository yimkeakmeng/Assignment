#include<iostream>
using namespace std;
  int main(){
    int arr[6] = {0,3,6,7,8,9};
    int first=arr[0];
    for(int i=0 ;i<sizeof(arr[6])+1;i++){
      if(first<=arr[i+1]){
        first= arr[i+1];
      }
    }
    cout<< first;

    return 0;
  }