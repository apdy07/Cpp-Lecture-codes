#include<iostream>
using namespace std;
int main(){
    char ch;
    cout<<(int)'a'<<endl;
    cin>>ch;
    if(ch>= 97 && ch<= 122){
        cout<<"Lowercase";
    }
    else if(ch>=65 && ch<=90){
        cout<<"Uppercase";
    }
}
