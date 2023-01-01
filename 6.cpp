#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter value of a "<<endl;
    cin>>a;
    cout<<"enter the value of b "<<endl;
    cin>>b;
    int c;
    c=b;
    b=a;
    a=c;
    cout<<"swap values of a and b are "<<endl;
    cout<<a<<endl;
    cout<<b<<endl;
    return 0;
}