#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,5,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    for(int i=1;i<n;i++){
        int count=0;
        for(int j=0;j<=n-i-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                count++;
            }
        }

        if(!count){
            break;
        }
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
}
