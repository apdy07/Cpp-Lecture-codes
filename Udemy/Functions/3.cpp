#include<iostream>
using namespace std;
int pow(int x, int y){
    int z=1;
    for(int i=1;i<=y;i++){
        z = z*x;
    }
    return z;
}

int main(){
    cout<<pow(2,5);
    return 0;
}


