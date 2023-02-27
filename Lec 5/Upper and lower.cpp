#include<iostream>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    if(islower(ch)){
        cout<<"Lowercase";
    }
    else if(isupper(ch)){
        cout<<"Uppercase";
    }
}
