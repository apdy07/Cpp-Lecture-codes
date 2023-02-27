#include<iostream>
using namespace std;
int main(){
    int arr[] = {1,2,80,74,46,29,82};
    int n = sizeof(arr)/sizeof(int);
    // int n = sizeof(arr)/sizeof(arr[0])  both works for calculating size of array
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
}
