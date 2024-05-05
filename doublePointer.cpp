#include<iostream>
using namespace std;

int main(){
    int a =8;
    int* p = &a;
    int** p1 =&p;
    //all prints the same value
    cout<<a<<endl;
    cout<<*p<<endl;
    cout<<**p1<<endl;
    //address of a
    cout<<&a<<endl;
    cout<<p<<endl;
    cout<<*p1<<endl;
}
