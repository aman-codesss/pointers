#include<iostream>
using namespace std;
int main(){
    int num =5;
    int a =num;
    int* p = &num;

    cout<<"before"<<endl;
    cout<<num<<endl;
    a++;
    cout<<"after"<<endl;
    cout<<num<<endl;

    cout<<"before"<<endl;
    cout<<num<<endl;
    (*p)++;
    cout<<"after"<<endl;
    cout<<num<<endl;


}