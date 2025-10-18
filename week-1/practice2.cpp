#include <iostream>
using namespace std;
int main()
{
    double radius;
    double area;
    // step 1: Read in radius
    radius = 20;
    // step 2: compute arear
    area = radius * radius * 3.14159;
    // step 3:Display the area
    cout << "The area is " << area << endl;
    return 0;
}