#include <iostream>
#include <fstream>
using namespace std;

int main() {
    // ofstream => write to a file (output)
    // ifstream => read from a file (input)
    // fstream  => read and write

    ofstream outfile("data.txt");  // create/open file

    if (!outfile) {
        cout << "Error opening file";
        return 0;
    }

    outfile << "Welcome to C++\n";
    outfile << "This is file handling class\n";

    outfile.close();  // close the file

    return 0;
}
