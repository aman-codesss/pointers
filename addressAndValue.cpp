#include<iostream>
using namespace std;
int main(){
    int i[4] ={1,2,3,4};
    int *ptr =i;//stores the array's first element's address


    cout<<ptr<<endl;//both gives same address
    cout<<&i[0]<<endl; 


    
    (*ptr)++;//incremented the value of pointed value
    cout<<ptr<<endl; //same address
    cout<<*ptr<<endl;//not same

    ptr++;
    cout<<ptr<<endl;//moved to next element
    cout<<*ptr<<endl;//value of the next element

}