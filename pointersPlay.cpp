#include<iostream>
using namespace std;
int main(){
    int arr[10]={2,4,5,6,7,9};
    cout<<arr<<" - "<<&arr[0]<<endl;
    int i=3;
    cout<<arr[i]<<" - "<<*(arr+i)<<" - " <<i[arr]<<endl;//can swtich the index with array
    //we know *(arr+i) => *(i+arr)
} 