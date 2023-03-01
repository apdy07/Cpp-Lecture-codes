#include<iostream>
using namespace std;
int main(){
    int a=10,b=5;
    a = a+b-(b=a);
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
}
