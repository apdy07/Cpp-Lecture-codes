#include<iostream>
using namespace std;
int main(){
    int a=10,b=5;
    int temp = a;
    a = b;
    b = temp;
    cout<<"a: "<<a<<endl;
    cout<<"b: "<<b<<endl;
}
