#include<iostream>
using namespace std;
int main(){
    int i=0;
    for(;;){
        if(i>=10){
            break;
        }
        if(i==5){
            i++;
            continue;
        }

        cout<<i<<endl;
        i++;

    }
}
