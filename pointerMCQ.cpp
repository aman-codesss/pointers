#include<iostream>
using namespace std;

    void update(int *p){
        *p = (*p)  *  2;
    }
        void increment(int **p){
        ++(**p);
    }
int main() {



        int num = 110;
        int *ptr = &num;
        increment(&ptr);//pass by reference
        cout << num << endl;
        update(&num);
        cout<<num<<endl;



    return 0;
}