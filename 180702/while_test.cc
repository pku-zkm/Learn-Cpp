#include<iostream>
using namespace std;
int main(){
    int a=0,sum=0;
    while(a<10){
        sum+=++a;
        cout<<a<<endl;
    }
    cout<<sum<<endl;
    return 0;
}

