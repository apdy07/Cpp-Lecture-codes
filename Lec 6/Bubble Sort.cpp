#include<iostream>
using namespace std;
int main(){
    int arr[] = {3,7,9,1,6,220,90,80,67,78};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=1;i<n;i++){
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j], arr[j+1]);
                //arr[j] = arr[j+1]+arr[j]- (arr[j+1] = arr[j]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<endl;
    }
}
