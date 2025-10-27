#include <iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter a number:";
    cin >>number;
    if (number % 5==0){
        cout<<"HiFive"<< endl;
    
    }
    else if (number % 2 ==0){
        cout<<"Hieven"<< endl;
    }
return 0;
}