#include<iostream>
using namespace std;
int i=100;
int main(){
    cout<<i<<endl;
    int i=0;
    if(i<10){
        cout<<i<<endl;
        int i=10;
        cout<<i<<endl;
        cout<<::i<<endl;
    }
    cout<<i<<endl;
}
