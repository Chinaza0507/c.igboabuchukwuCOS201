#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // ofstream => write to a file (output)
    // ifstream => read from a file (input)
    // fstream  => read and write

    ifstream infile("data.txt");  // create/open file
if(!infile){
    cout<<"cannot open file";
    return 0;
}
string line;
while(getline(infile, line)){
    cout<<line<<"\n";
}
infile.close();
}