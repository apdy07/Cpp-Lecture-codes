#include<iostream>
using namespace std;
int main(){
    int bs; //basic salary
    cin>>bs;
    float da,hra;
    da = 0.4*bs; //Dearness allowance
    hra = 0.2*bs; //hose rent allowance
    int gross_salary = da+hra+bs;
    cout<<"Gross salary: "<<gross_salary;
}
