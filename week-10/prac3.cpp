#include <iostream>
#include <fstream>
using namespace std;

int main() {
    //ios::out ==>write mode
    //ios::in ==> read mode
    //ios::app ==> append mode
    //ios::trunc ==> erasw file before writing
    fstream file("data txt",ios::out | ios::app);
file<<"Adding a new line .\n";
file.close();
cout<<"DONE.\n";
}

