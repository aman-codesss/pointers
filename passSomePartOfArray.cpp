#include<iostream>
using namespace std;
int getSum(int* arr,int n){
    int s=0;
    for(int i=0;i<n;i++){
        s+=arr[i];
    }
    return s;
}
int main(){
    int arr[10]={1,2,3,4,5,6,7};
    cout<<"Sum: "<<getSum(arr,7)<<endl;//28 must be the sum
    cout<<"Sum from 3rd index: "<<getSum(arr+3,7);//22 must be sum
}