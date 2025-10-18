#include <iostream>
using namespace std;
int main(){
int x,y,tempvar;
//tempvar is the temporary variable for swapping the values x and y

cout <<"the vaules of x = "<< endl;
cin>> x ;

cout <<"the value of y" << endl;
cin >> y;
tempvar = x;
x = y;
y = tempvar;
cout<< "After swapping with temporary variable:x ="<<x<<",y ="<<y<<endl;
 return 0;


}


