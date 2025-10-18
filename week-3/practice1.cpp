#include <iostream>
using namespace std;
int main(){
    double f,c;
    cout<<"Enter fahrenheit value=";
    cin>>f;
    c= (5.0/9)*(f-32);//The formula for the conversion of fahrenheit to celcius
    cout<<"The value after conversion to celcius=" <<c<< endl;
return 0;
}