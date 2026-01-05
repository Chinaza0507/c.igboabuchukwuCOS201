#include <iostream>
#include <cmath>
using namespace std;

double math(double n){
   double math = sqrt(6*(1.0 + 1.0/4 + 1.0/9 + 1.0/16 + 1.0/25));
   return math;
}

int main(){
    int num = 22;
    for(int i = 0; i < num; i += 2){
        cout << i << " ";
    }
    cout << endl;

    double result = math(0);
    cout << "Math result: " << result << endl;

    return 0;
}
