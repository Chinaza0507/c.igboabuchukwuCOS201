#include <iostream>
using namespace std;
int main(){
    int age;
    cout<<"Enter your age please"<<endl;
    cin>> age;
    if (age >=18){
    cout<<"You are an adult"<<endl;
    }
     if (age<18){
        cout<<"You are a minor please leave this platform"<<endl;

    }
    return 0;
}