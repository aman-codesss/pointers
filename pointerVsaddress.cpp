#include<iostream>
using namespace std;
int main(){
    int temp[5]={2,3,4};
    //3 ways of accesssing the 1st address
    cout<<&temp[0]<<endl;
    cout<<&temp<<endl;
    cout<<temp<<endl;

    cout<<sizeof(temp)<<endl;//sizeof array
    cout<<sizeof(&temp)<<endl;//size of 1st address
    cout<<sizeof(&temp[0])<<endl;//size of 1st address
}