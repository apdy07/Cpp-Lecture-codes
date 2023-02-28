#include<iostream>
using namespace std;
int main(){
    int arr[] = {10,20,30,40,50};
    int n = sizeof(arr)/sizeof(arr[0]);
    int key;
    cin>>key;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<=n;i++){
        if(arr[i] == key){
            cout<<i+1;
            break;
        }
        if(i==n){
        cout<<"-1";
        }
    }
}
