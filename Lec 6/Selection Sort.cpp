#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,5,6,1,3};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    for(int i=0;i<=n-2;i++){
        int min = i;
        for(int j=i+1;j<=n-1;j++){
            if(arr[min]>arr[j]){
                min = j;
            }
        }
            swap(arr[i], arr[min]);
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;

    return 0;
} 
